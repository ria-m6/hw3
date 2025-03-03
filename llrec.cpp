#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
  if(head==NULL){
    return;
  }
  if(head->val > pivot){
    if(larger == NULL){
      larger = head;
    } else{
      larger->next = head;
      larger = larger->next;
    }
  }else{
    if(smaller == NULL){
      smaller = head;
    } else{
      smaller->next = head;
      smaller = smaller->next;
    }
  }
  Node *temp = head;
  head = head->next;
  temp->next = NULL;

  llpivot(head, smaller, larger, pivot);
}