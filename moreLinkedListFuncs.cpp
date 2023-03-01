#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

void addIntToEndOfList(LinkedList *list, int value)
{
  assert(list != NULL); // if list is NULL, we can do nothing.

  Node *p = new Node; // temporary pointer

  // TODO:
  // (1) Allocate a new node.  p will point to it.
  //Node* temp = new Node;
  //; // THIS IS PLACE-HOLDER LINE OF CODE.  DELETE IT AND REPLACE IT.
  // (2) Set p's data field to the value passed in
  p->data = value;
  // (3) Set p's next field to NULL
  p->next = NULL;

  if (list->head == NULL)
  {
    list->tail = p;
    list->head = p;

    // (4) Make both head and tail of this list point to p
  }
  else
  {

    // Add p at the end of the list.
    //temp = list->tail;
    list->tail->next = p;

    // (5) The current node at the tail? Make it point to p instead of NULL
    
   //temp->next = p;
    // (6) Make the tail of the list be p now.
    list->tail = p;
  }
}

void addIntToStartOfList(LinkedList *list, int value)
{
  assert(list != NULL); // if list is NULL, we can do nothing.
  Node *p = new Node;
  p->data = value;
  p->next = NULL;
 

  // Add code for this.
  // HINT:
  // consider all edge cases such as when list->head is or is not null AND
  // consider all edge cases such as when list->tail is or is not null.
  // Visualizing the problem with a box and pointer diagram can help.
  if(list->head == NULL){
    list->head = p;
    list->tail = p;
  }
  else{
    
  
    p->next = list->head;
    list->head = p;
  }
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element
// If more than one element has largest value,
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node *pointerToMax(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list != NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  Node* currObj = list->head;
  Node* lV = list->head;

  while(currObj != nullptr){
    if(currObj->data > lV->data){
      lV = currObj;
    }
    currObj = currObj->next;
  }

  return lV; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.
// You may assume list has at least one element
// If more than one element has smallest value,
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node *pointerToMin(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to min element
  //   (first one such value that occurs if there are ties.)
  Node* currObj = list->head;
  Node* sV = list->head;

  while(currObj != nullptr){
    if(currObj->data < sV->data){
      sV = currObj;
    }

    currObj = currObj->next;
  }

  return sV; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);

  Node* lV = list->head;
  Node* currObj = list->head;

  while(currObj != nullptr){
    if(currObj->data > lV->data){
      lV = currObj;
    }
    currObj = currObj->next;

  }

  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return lV->data; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list)
{
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);
  
  Node* sV = list->head;
  Node* currObj = list->head;

  while( currObj != nullptr ){
    if(currObj->data < sV->data){
      sV = currObj;

    }
    currObj = currObj->next;

  }
  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).

  return sV->data; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList *list)
{
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);

  Node* currObj = list->head;
  int result = 0;


  while(currObj != nullptr){
    result += currObj->data;
    currObj = currObj->next;


  }

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  return result; // STUB!  Replace this line with correct code
}
