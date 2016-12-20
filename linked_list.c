//print in reverse 
void ReversePrint(Node *head)
{
    if(head==NULL) return;
  if(head->next != NULL){
      ReversePrint(head->next);
  }
    cout<<head->data<<endl;
}

//compare 2 linked lists
int CompareLists(Node *headA, Node* headB)
{
  while(headA!=NULL && headB!= NULL){
      if(headA->data != headB->data){
          return 0;
      }
      headA = headA->next;
      headB = headB->next;
  }
    if(headA==NULL && headB==NULL){
        return 1;
    }
    return 0;
}



Node* reverse(struct Node* head){
struct node *prev=NULL,*current=head; *next;

while(current!=NULL){
  prev=current->next;

}


  return current;
}
