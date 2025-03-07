#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

//FIXTHIS
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
  // if(head==nullptr){
  //   smaller = nullptr;
  //   larger = nullptr;
  //   return;
  // }
  // Node* nextNode = head->next;
  // head->next = nullptr;

  // if(head->val <= pivot){
  //   if (smaller == nullptr) {
  //     smaller = head;
  //   } else {
  //     Node* temp = smaller;
  //     while (temp->next != nullptr){
  //       temp = temp->next;
  //     }
  //     temp->next = head;
  //   }
  // }else{
  //   if (larger == nullptr) {
  //     larger = head;
  //   } else {
  //     Node* temp = larger;
  //     while (temp->next != nullptr){
  //       temp = temp->next;
  //     }
  //     temp->next = head;
  //   }
  // }
  // head=nextNode;
  // llpivot(head, smaller, larger, pivot);

  // if (head == nullptr) {
  //   smaller = smaller ? smaller : nullptr;
  //   larger = larger ? larger : nullptr;
  // }

  smaller = nullptr;
  larger = nullptr;
  Node* smallTail = nullptr;
  Node* largeTail = nullptr;

  while (head != nullptr) {
      Node* nextNode = head->next;  // Saves next node
      head->next = nullptr;  // Detach current node

      if (head->val <= pivot) {
          if (smaller == nullptr) {
              smaller = head;  // Initialize small list
              smallTail = head;
          } else {
              smallTail->next = head;  // Append to tail
              smallTail = head;
          }
      } else {
          if (larger == nullptr) {
              larger = head;  // Initialize large list
              largeTail = head;
          } else {
              largeTail->next = head;  // Append to tail
              largeTail = head;
          }
      }

      head = nextNode;  // Move forward
  }
}