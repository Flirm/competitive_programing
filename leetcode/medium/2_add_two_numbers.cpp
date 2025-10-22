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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return nullptr;
        ListNode *res = new ListNode(), *aux = res;
        int cIn = 0, s = 0;
        while(l1 && l2){
            s = (cIn + l1->val + l2->val);
            aux->val = s % 10;
            cIn = s / 10;
            aux->next = (l1->next || l2->next) ? new ListNode() : nullptr;
            aux = aux->next ? aux->next : aux;
            l1 = l1->next; l2 = l2->next;
        }
        while(l1){ 
            s = (cIn + l1->val);
            aux->val = s % 10;
            cIn = s / 10;
            aux->next = (l1->next) ? new ListNode() : nullptr;
            aux = aux->next ? aux->next : aux;
            l1 = l1->next;
        }
        while(l2){
            s = (cIn + l2->val);
            aux->val = s % 10;
            cIn = s / 10;
            aux->next = (l2->next) ? new ListNode() : nullptr;
            aux = aux->next ? aux->next : aux;
            l2 = l2->next;
        }
        if(cIn){
            aux->next = new ListNode();
            aux = aux->next;
            aux->val = cIn;
        }
        return res;
    }
};