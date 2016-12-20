/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    struct ListNode *ptr;
    ptr= A;
    int x,flag=0;
    while(ptr!=NULL){
        int x=ptr->val;
        struct ListNode *ptr2=ptr->next;
        while(ptr2 != NULL && ptr2->val == x ){
            ptr2=ptr2->next;
        }
        ptr->next = ptr2;
        ptr=ptr->next;
    }
    return A;
}
