
ListNode* Solution::rotateRight(ListNode* A, int B) {
  if(A->next==NULL){
      return A;
  }
struct ListNode *ptr,*ptr2,*temp;
int size=0;
ptr=A;
while(ptr!=NULL){
  size++;
  ptr=ptr->next;
}
ptr=A;
ptr2=A;
B=B%size;
while(B--){
  ptr=ptr->next;
}

if(ptr==A){
  return A;
}
ptr2=A;
while(ptr->next != NULL){
  ptr=ptr->next;
  ptr2=ptr2->next;
}

temp=ptr2->next;
ptr2->next=NULL;
ptr->next=A;
return temp;
}
