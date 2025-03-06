#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
  if(head==nullptr){
    return;
  }
  Node* nextNode = head->next;
  head->next = nullptr;

  if(head->val <= pivot){
    if (smaller == nullptr) {
      smaller = head;
    } else {
      Node* temp = smaller;
      while (temp->next != nullptr) temp = temp->next;
      temp->next = head;
    }
  }else{
    if (larger == nullptr) {
      larger = head;
    } else {
      Node* temp = larger;
      while (temp->next != nullptr) temp = temp->next;
      temp->next = head;
    }
  }
  head=nextNode;
  llpivot(head, smaller, larger, pivot);
}