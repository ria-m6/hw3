#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) {
  if (head == nullptr) {  // Base case: Empty list
    smaller = nullptr;
    larger = nullptr;
    return;
  }

  Node* nextNode = head->next;  // Save next node
  head->next = nullptr;         // Detach the current node

  if (head->val <= pivot) {  
    smaller = head;  // Assign head to smaller list
    llpivot(nextNode, smaller->next, larger, pivot);  // Recursively process next node
  } else {
    larger = head;  // Assign head to larger list
    llpivot(nextNode, smaller, larger->next, pivot);  // Recursively process next node
  }

  head = nullptr;  // Ensure head is set to nullptr after partitioning
}




// //FIXTHIS
// void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
//   // if(head==nullptr){
//   //   smaller = nullptr;
//   //   larger = nullptr;
//   //   return;
//   // }
//   // Node* nextNode = head->next;
//   // head->next = nullptr;

//   // if(head->val <= pivot){
//   //   if (smaller == nullptr) {
//   //     smaller = head;
//   //   } else {
//   //     Node* temp = smaller;
//   //     while (temp->next != nullptr){
//   //       temp = temp->next;
//   //     }
//   //     temp->next = head;
//   //   }
//   // }else{
//   //   if (larger == nullptr) {
//   //     larger = head;
//   //   } else {
//   //     Node* temp = larger;
//   //     while (temp->next != nullptr){
//   //       temp = temp->next;
//   //     }
//   //     temp->next = head;
//   //   }
//   // }
//   // head=nextNode;
//   // llpivot(head, smaller, larger, pivot);

//   // if (head == nullptr) {
//   //   smaller = smaller ? smaller : nullptr;
//   //   larger = larger ? larger : nullptr;
//   // }

//   smaller = nullptr;
//   larger = nullptr;
//   Node* smallTail = nullptr;
//   Node* largeTail = nullptr;

//   while (head != nullptr) {
//       Node* nextNode = head->next;  // Saves next node
//       head->next = nullptr;  // Detach current node

//       if (head->val <= pivot) {
//           if (smaller == nullptr) {
//               smaller = head;  // Initialize small list
//               smallTail = head;
//           } else {
//               smallTail->next = head;  // Append to tail
//               smallTail = head;
//           }
//       } else {
//           if (larger == nullptr) {
//               larger = head;  // Initialize large list
//               largeTail = head;
//           } else {
//               largeTail->next = head;  // Append to tail
//               largeTail = head;
//           }
//       }

//       head = nextNode;  // Move forward
//   }
// }