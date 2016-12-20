
int Solution::lPalin(ListNode* A) {

    struct ListNode *ptr,*ptr2;
    ptr2=A;
    ptr=A;
    int size=0;
    while(ptr!=NULL){
        size++;
        ptr=ptr->next;
    }

    int x=size/2;
    if(size%2==0){
        x--;
    }

    while(x--){
            ptr2=ptr2->next;
    }
    ptr=ptr2;
    ptr2=ptr2->next;
    ptr->next=NULL;
    ptr=A;


     struct ListNode *prev = NULL,*current = ptr2,*next;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    ptr2=prev;


    while(ptr2!=NULL){
        if(ptr->val != ptr2->val){
            return 0;
        }
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
   return 1;
}
