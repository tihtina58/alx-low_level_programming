A doubly linked list is a variation of the singly linked list. We are aware that the singly linked list is a collection of nodes with each node having a data part and a pointer pointing to the next node.

A doubly linked list is also a collection of nodes. Each node here consists of a data part and two pointers. One pointer points to the previous node while the second pointer points to the next node.
As the doubly linked list contains two pointers i.e. previous and next, we can traverse it into the directions forward and backward. This is the main advantage of doubly linked list over the singly linked list.

Declaration
In C-style declaration, a node of the doubly linked list is represented as follows:

struct node
{
            struct node *prev;
            int data;
            struct node *next;
};
Apart from the above declaration, we can also represent a node in the doubly linked list as a class in C++. A doubly linked list is represented as a class when we use STL in C++. We can implement a doubly linked list using a class in Java as well.

Basic Operations
Following are some of the operations that we can perform on a doubly linked list.

Insertion
Insertion operation of the doubly linked list inserts a new node in the linked list. Depending on the position where the new node is to be inserted, we can have the following insert operations.

Insertion at front – Inserts a new node as the first node.
Insertion at the end – Inserts a new node at the end as the last node.
Insertion before a node – Given a node, inserts a new node before this node.
Insertion after a node – Given a node, inserts a new node after this node.
Deletion
Deletion operation deletes a node from a given position in the doubly linked list.

Deletion of the first node – Deletes the first node in the list
Deletion of the last node – Deletes the last node in the list.
Deletion of a node given the data – Given the data, the operation matches the data with the node data in the linked list and deletes that node.
Traversal
Traversal is a technique of visiting each node in the linked list. In a doubly linked list, we have two types of traversals as we have two pointers with different directions in the doubly linked list.

Forward traversal – Traversal is done using the next pointer which is in the forward direction.
Backward traversal – Traversal is done using the previous pointer which is the backward direction.
Reverse
This operation reverses the nodes in the doubly linked list so that the first node becomes the last node while the last node becomes the first node.

Search
Search operation in the doubly linked list is used to search for a particular node in the linked list. For this purpose, we need to traverse the list until a matching data is found.

Insertion
Insert a node at the front

Insert a node at the front

Insertion of a new node at the front of the list is shown above. As seen, the previous new node N is set to null. Head points to the new node. The next pointer of N now points to N1 and previous of N1 that was earlier pointing to Null now points to N.

Insert node at the end

Insert node at the end

Inserting node at the end of the doubly linked list is achieved by pointing the next pointer of new node N to null. The previous pointer of N is pointed to N5. The ‘Next’ pointer of N5 is pointed to N.

Insert node before/after given node

Insert node before-after given node

As shown in the above diagram, when we have to add a node before or after a particular node, we change the previous and next pointers of the before and after nodes so as to appropriately point to the new node. Also, the new node pointers are appropriately pointed to the existing nodes.

The following C++ program demonstrates all the above methods to insert nodes in the doubly linked list.

#include <iostream>
using namespace std;
  
// A doubly linked list node
struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};
  
//inserts node at the front of the list
void insert_front(struct Node** head, int new_data)
{
   //allocate memory for New node
   struct Node* newNode = new Node;
  
   //assign data to new node
   newNode->data = new_data;
  
   //new node is head and previous is null, since we are adding at the front
   newNode->next = (*head);
   newNode->prev = NULL;
  
   //previous of head is new node
   if ((*head) != NULL)
   (*head)->prev = newNode;
  
   //head points to new node
   (*head) = newNode;
}
/* Given a node as prev_node, insert a new node after the given node */
void insert_After(struct Node* prev_node, int new_data)
{
   //check if prev node is null
   if (prev_node == NULL) {
   cout<<"Previous node is required , it cannot be NULL";
   return;
}
   //allocate memory for new node
   struct Node* newNode = new Node;
  
   //assign data to new node
   newNode->data = new_data;
  
   //set next of newnode to next of prev node
   newNode->next = prev_node->next;
  
   //set next of prev node to newnode
   prev_node->next = newNode;
  
   //now set prev of newnode to prev node
   newNode->prev = prev_node;
  
   //set prev of new node's next to newnode
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}
  
//insert a new node at the end of the list
void insert_end(struct Node** head, int new_data)
{
   //allocate memory for node
   struct Node* newNode = new Node;
  
   struct Node* last = *head; //set last node value to head
  
   //set data for new node
   newNode->data = new_data;
  
   //new node is the last node , so set next of new node to null
   newNode->next = NULL;
  
   //check if list is empty, if yes make new node the head of list
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
  
//otherwise traverse the list to go to last node
while (last->next != NULL)
last = last->next;
  
//set next of last to new node
last->next = newNode;
  
//set last to prev of new node
newNode->prev = last;
return;
}
  
// This function prints contents of linked list starting from the given node
void displayList(struct Node* node) {
   struct Node* last;
  
   while (node != NULL) {
      cout<<node->data<<"<==>";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }
  
//main program
int main() {
   /* Start with the empty list */
   struct Node* head = NULL;
  
   // Insert 40 as last node
   insert_end(&head, 40);
  
   // insert 20 at the head
   insert_front(&head, 20);
  
   // Insert 10 at the beginning.
   insert_front(&head, 10);
  
   // Insert 50 at the end.
   insert_end(&head, 50);
  
   // Insert 30, after 20.
   insert_After(head->next, 30);
  
   cout<<"Doubly linked list is as follows: "<<endl;
   displayList(head);
   return 0;
}
Output:

Doubly linked list is as follows:

10<==>20<==>30<==>40<==>50<==>NULL

The above program constructs a doubly linked list by inserting the nodes using three insertion methods i.e. inserting the node at the front, inserting the node at the end and inserting the node after the given node.

Next, we demonstrate the same operation as a Java implementation.

// Java Class for Doubly Linked List
class Doubly_linkedList {
   Node head; // list head
  
    /* Doubly Linked list Node*/
   class Node {
      int data;
      Node prev;
      Node next;
  
      //create a new node using constructor
      Node(int d) { data = d; }
   }
  
// insert a node at the front of the list
public void insert_front(int new_data)
{
   /* 1. allocate node
   * 2. put in the data */
   Node new_Node = new Node(new_data);
  
   /* 3. Make next of new node as head and previous as NULL */
   new_Node.next = head;
   new_Node.prev = null;
  
   /* 4. change prev of head node to new node */
   if (head != null)
   head.prev = new_Node;
  
   /* 5. move the head to point to the new node */
   head = new_Node;
}
//insert a node after the given prev node
public void Insert_After(Node prev_Node, int new_data)
{
   //check that prev node is not null
   if (prev_Node == null) {
   System.out.println("The previous node is required,it cannot be NULL ");
   return;
}
  
   //allocate new node and set it to data
   Node newNode = new Node(new_data);
  
   //set next of newNode as next of prev node
   newNode.next = prev_Node.next;
  
   //set new node to next of prev node
   prev_Node.next = newNode;
  
   //set prev of newNode as prev node
   newNode.prev = prev_Node;
  
   //set prev of new node's next to newnode
   if (newNode.next != null)
   newNode.next.prev = newNode;
}
  
// Add a node at the end of the list
void insert_end(int new_data)   {
   //allocate the node and set the data
   Node newNode = new Node(new_data);
   Node last = head; //set last as the head
   //set next of new node to null since its the last node
   newNode.next = null;
  
   //set new node as head if the list is null
   if (head == null) {
      newNode.prev = null;
      head = newNode;
      return;
   }
   //if list is not null then traverse it till the last node and set last next to last
   while (last.next != null)
   last = last.next;
  
   last.next = newNode;           //set last next to new node
  
   newNode.prev = last;           //set last as prev of new node
}
// display the contents of linked list starting from the given node
public void displaylist(Node node)
{
   Node last = null;
   while (node != null) {
      System.out.print(node.data + "<==>");
      last = node;
      node = node.next;
   }
   if(node == null)
   System.out.print("null");
   System.out.println();
  
   }
}
class Main{
   public static void main(String[] args)
      {
      /* Start with the empty list */
      Doubly_linkedList dll = new Doubly_linkedList();
  
      // Insert 40.
      dll.insert_end(40);
  
      // Insert 20 at the beginning.
      dll.insert_front(20);
  
      // Insert 10 at the beginning.
      dll.insert_front(10);
  
      // Insert 50 at the end.
      dll.insert_end(50);
  
      // Insert 30, after 20.
      dll.Insert_After(dll.head.next, 30);
  
      System.out.println("Doubly linked list created is as follows: ");
      dll.displaylist(dll.head);
      }
}
Output:

Doubly linked list created is as follows:

10<==>20<==>30<==>40<==>50<==>null

Deletion
A node can be deleted from a doubly linked list from any position like from the front, end or any other given position or given data.

When deleting a node from the doubly linked list, we first reposition the pointer pointing to that particular node so that the previous and after nodes do not have any connection to the node to be deleted. We can then easily delete the node.

Consider the following doubly linked list with three nodes A, B, C. Let us consider that we need to delete the node B.

doubly linked list with three nodes A, B, C

As shown in the above series of the diagram, we have demonstrated the deletion of node B from the given linked list. The sequence of operation remains the same even if the node is first or last. The only care that should be taken is that if in case the first node is deleted, the second node’s previous pointer will be set to null.

Similarly, when the last node is deleted, the next pointer of the previous node will be set to null. If in between nodes are deleted, then the sequence will be as above.

We leave the program to delete a node from a doubly linked list. Note that the implementation will be on the lines of the insertion implementation.

Reverse Doubly Linked List
Reversing a doubly linked list is an important operation. In this, we simply swap the previous and next pointers of all the nodes and also swap the head and tail pointers.

Given below is a doubly linked list:

Reverse doubly linked list

Following C++ implementation shows the Reverse Doubly Linked List.

#include <iostream>
using namespace std;
//node declaration for doubly linked list
struct Node {
   int data;
   struct Node *prev, *next;
};
  
Node* newNode(int val)
{
   Node* temp = new Node;
   temp->data = val;
   temp->prev = temp->next = nullptr;
   return temp;
}
void displayList(Node* head)
{
   while (head->next != nullptr) {
      cout << head->data << " <==> ";
      head = head->next;
      }
   cout << head->data << endl;
}
  
// Insert a new node at the head of the list
void insert(Node** head, int node_data)
{
   Node* temp = newNode(node_data);
   temp->next = *head;
   (*head)->prev = temp;
   (*head) = temp;
}
  
// reverse the doubly linked list
void reverseList(Node** head)
{
   Node* left = *head, * right = *head;
  
   // traverse entire list and set right next to right
   while (right->next != nullptr)
   right = right->next;
  
   //swap left and right data by moving them towards each other till they meet or cross
   while (left != right && left->prev != right) {
  
      // Swap left and right pointer data
      swap(left->data, right->data);
  
      // Advance left pointer
      left = left->next;
  
      // Advance right pointer
      right = right->prev;
   }
}
int main()
{
   Node* headNode = newNode(5);
   insert(&headNode, 4);
   insert(&headNode, 3);
   insert(&headNode, 2);
   insert(&headNode, 1);
   cout << "Original doubly linked list: " << endl;
   displayList(headNode);
   cout << "Reverse doubly linked list: " << endl;
   reverseList(&headNode);
   displayList(headNode);
  
   return 0;
}
Output:

Original doubly linked list:

1 <==> 2 <==> 3 <==> 4 <==> 5

Reverse doubly linked list:

5 <==> 4 <==> 3 <==> 2 <==> 1

Here we swap the left and right pointers and move them towards each other till they meet or cross each other. Then the first and last nodes are swapped.

The next program is the Java implementation for reversing a doubly linked list. In this program also we make use of swapping of the left and right nodes as we did in our previous program.

// Java Program to Reverse a doubly linked List using Data Swapping
class Main{
static class Node {
   int data;
   Node prev, next;
};
  
static Node newNode(int new_data)  {
   Node temp = new Node();
   temp.data = new_data;
   temp.prev = temp.next = null;
   return temp;
}
  
static void displayList(Node head)  {
   while (head.next != null)  {
   System.out.print(head.data+ " <==> ");
   head = head.next;
}
System.out.println( head.data );
}
  
// Insert a new node at the head of the list
static Node insert(Node head, int new_data)  {
   Node temp = newNode(new_data);
   temp.next = head;
   (head).prev = temp;
   (head) = temp;
   return head;
}
  
// Function to reverse the list
static Node reverseList(Node head)  {
    Node left = head, right = head;
   // traverse the list, set right pointer to end of list
   while (right.next != null)
   right = right.next;
   // move left and right pointers and swap their data till they meet or cross each other
   while (left != right && left.prev != right)   {
   // Swap data of left and right pointer
   int t = left.data;
   left.data = right.data;
   right.data = t;
  
   left = left.next;                        // Advance left pointer
   right = right.prev;                    // Advance right pointer
   }
return head;
}
public static void main(String args[])
   {
   Node headNode = newNode(5);
   headNode = insert(headNode, 4);
   headNode = insert(headNode, 3);
   headNode = insert(headNode, 2);
   headNode = insert(headNode, 1);
  
   System.out.println("Original doubly linked list:");
   displayList(headNode);
   System.out.println("Reversed doubly linked list:");
   headNode=reverseList(headNode);
   displayList(headNode);
  
   }
}
