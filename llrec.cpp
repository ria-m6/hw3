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
