
ListNode* Solution::removeNthFromEnd(ListNode* A, int b) {

    struct ListNode *ptr1,*ptr2;
    int size=0;
    ptr1=A;

    while(ptr1!=NULL){
        size++;
        ptr1=ptr1->next;
    }

    if(b>=size){
        A=A->next;
        return A;
    }

    ptr1=A;

    while(b--){
        ptr1=ptr1->next;
    }
    ptr2=A;
while(ptr1->next!=NULL){
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
}

ptr2->next= ptr2->next->next;

    return A;}
