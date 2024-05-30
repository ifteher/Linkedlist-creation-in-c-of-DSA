#include <stdio.h>
#include <stdlib.h>


struct Node {
  int data;
  struct Node* next;
};


struct Node* newNode(int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); /// Allocate memory for the new node
  new_node->data = data;  /// Assign data to the node
  new_node->next = NULL;  ///  the new node points to NULL
  return new_node;
}


void insertAtBeginning(struct Node** head_ref, int new_data) {
  struct Node* new_node = newNode(new_data);  /// Create a new node
  new_node->next = (*head_ref);  /// Make the new node point to the current head
  (*head_ref) = new_node;  /// Move the head to the new node
}

void printList(struct Node* node) {
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n");
}

int main() {
  /// Create the head node of the linked list
  struct Node* head = NULL;

  int a;
  scanf("%d",&a);
  insertAtBeginning(&head, a);
  int b;
  scanf("%d",&b);
  insertAtBeginning(&head, b);
  int c;
  scanf("%d",&c);
  insertAtBeginning(&head, c);
  int d;
  scanf("%d",&d);
  insertAtBeginning(&head, d);
  int e;
  scanf("%d",&e);
  insertAtBeginning(&head, e);

  printf("Created linked list: ");
  printList(head);

///coded by zayed(CE22048).
  return 0;
}
