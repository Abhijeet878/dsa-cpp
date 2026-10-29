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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* curr = head ; 
        int n = 1 ; 
        if(head==nullptr || head->next==nullptr){
            return head ; 
        }

while(curr->next!= nullptr ){

        curr = curr->next ; 
       n++ ; 
}
 k = k%n ; 

 curr->next = head ;  

 ListNode* tail1 = head ; 

 int m =  n - k ;
 for(int i = 1 ;i<=m-1 ; i++){
    tail1 = tail1->next ;

 }

ListNode* head1 = tail1->next ; 
tail1->next = nullptr ; 

return head1 ;
        
        
    }
};