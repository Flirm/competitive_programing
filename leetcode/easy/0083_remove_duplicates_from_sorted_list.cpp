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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        ListNode* aux = head, *aux2 = head->next;
        while(aux2){
            if(aux2->val == aux->val){
                aux2 = aux2->next;
                aux->next = aux2;
            }
            else{
                aux2 = aux2->next;
                aux = aux->next;
            }
        }
        return head;
    }
};