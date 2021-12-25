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
// 100% 21,44%
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode *> x= {head};
        while(head->next != nullptr){
            x.push_back(head->next);
            head= head->next;

        }
        return x[(x.size())/2];
    }
};