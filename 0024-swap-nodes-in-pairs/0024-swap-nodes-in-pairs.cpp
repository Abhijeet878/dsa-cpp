/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head==nullptr || head->next == nullptr){
            return head ; 
        }
    
    ListNode* prev = nullptr ; 
    ListNode*curr = head ;
     head  = head->next ; 

    while(curr!=nullptr && curr->next!=nullptr){
        ListNode*next = curr->next; 

        curr->next = next->next ; 
        next->next = curr ; 

        if(prev!=nullptr){
            prev->next = next  ;
        }
        prev = curr ; 
        curr = curr->next ;   ;
       
    }

            return head ;  
        
    }
};