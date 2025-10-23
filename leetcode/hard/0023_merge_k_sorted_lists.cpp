#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto comp = [](ListNode* a, ListNode* b){return a->val > b->val;};
        priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> pq(comp);
        for(int i = 0; i < lists.size(); i++) if(lists[i]) pq.push(lists[i]);
        if(pq.empty()) return nullptr;
        ListNode* res = new ListNode(); ListNode* aux = res;
        while(!pq.empty()){
            aux->next = new ListNode(pq.top()->val);
            aux = aux->next;
            if(pq.top()->next)pq.push(pq.top()->next);
            pq.pop();
        }
        return res->next;
    }
};