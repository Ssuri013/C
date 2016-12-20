/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
struct ListNode *ll,*ll2;
if(A==NULL){
    return B;
}
if(B==NULL){
    return A;
}

if(A->val > B->val){
    ll=B;
    B=B->next;
}
else{
    ll=A;
    A=A->next;
}

ll2=ll;
while(A!=NULL && B!=NULL){
    if(A->val > B->val){
    ll->next=B;
    ll=ll->next;
    B=B->next;
}
else{
    ll->next=A;
    ll=ll->next;
    A=A->next;
    }
}
if(A!=NULL){
    ll->next=A;
}
if(B!=NULL){
    ll->next=B;
}
return ll2;
}
