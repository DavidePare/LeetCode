class Solution {
public:
    void deleteNode(ListNode* node) {
		//First Solution i find;
        ListNode* nodeToDelete=node;
        while(node->next->next != NULL){
            node->val=node->next->val;
            node=node->next;
        }
        node->val=node->next->val;
        node->next=NULL;
		
		//Reading the other i can use also a simple solution that is
		node->val=node->next->val;
		node->next=node->next->next;
    }
};