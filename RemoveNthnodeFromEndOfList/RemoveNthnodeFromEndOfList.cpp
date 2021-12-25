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
// 78,76% -- 31,39%
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=1,a=0;
        ListNode* elem = head,*start =head;
        while(elem->next != nullptr){
            elem=elem->next;
            sz++;
        };
        do{
            if(sz==n) {
                start=head->next;
                return start;
            }
            if((sz-n-1)==a){
                if(head->next != nullptr ) head->next=head->next->next;
                else head=nullptr;
                return start;
            }else head=head->next;
            a++;
        }while(head != nullptr);
        
        return start;
    }
};