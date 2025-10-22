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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return nullptr;
        ListNode* res = new ListNode();
        ListNode* aux = res;
        while(list1 && list2){
            if(list1->val < list2->val){
                aux->val = list1->val;
                list1 = list1->next;
                aux->next = new ListNode();
                aux = aux->next;
            }
            else{
                aux->val = list2->val;
                list2 = list2->next;
                aux->next = new ListNode();
                aux = aux->next;
            }
        }
        while(list1){
            aux->val = list1->val;
            aux->next = list1->next ? new ListNode() : nullptr;
            aux = aux->next;
            list1 = list1->next;
        }
        while(list2){
            aux->val = list2->val;
            aux->next = list2->next ? new ListNode() : nullptr;
            aux = aux->next;
            list2 = list2->next;
        }
        return res;
    }
};