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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return nullptr;
        int counter = 0;
        ListNode* aux = head, *aux2 = head->next;
        while(aux && aux2){
            if(!counter){
                int temp = aux->val;
                aux->val = aux2->val;
                aux2->val = temp;
            }
            aux = aux->next;
            aux2 = aux2->next;
            counter = (counter + 1)%2;
        }

        return head;
    } 
};