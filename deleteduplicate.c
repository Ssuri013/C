
ListNode* Solution::deleteDuplicates(ListNode* A) {

    if(A==NULL || A->next==NULL){
        return A;
    }

struct ListNode *ptr=A;

int fla=0,flag=0,x;

if(ptr->val == ptr->next->val){
    fla=1;
}

struct ListNode *uni;
uni=A;
while(ptr->next!=NULL){
    x=ptr->val;
    if(ptr->next->val==x){
        flag=1;
    }
    else{
        flag=0;
    }
    while(ptr->next!=NULL && ptr->next->val==x){
        ptr=ptr->next;
    }
    if(ptr->next==NULL){
        break;
    }
    if(flag==1){
        ptr=ptr->next;
    }
    if(flag==0){
        uni->next=ptr;
        uni=uni->next;
        ptr=ptr->next;

    }


}
uni->next=NULL;

if(fla==1){
    return A->next;
}


return A;



}
