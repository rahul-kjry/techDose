// selfReferentialStructure : structure that contain the pointer to a structure of same type
// singleLinkedList : Navigation is forward only

/*
//creating a node of singly linked list
#include <stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

int main() {
  struct node *head = NULL;
  head = (struct node *)malloc(sizeof(struct node));
  //awa struct node *head = malloc(sizeof(struct node));
  head -> data = 5;
  head -> link = NULL;
  printf("%d",head -> data);
  return 0;
}
*/

/*
// creating a singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
}
*/

/*
//count the no of nodes in singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void count(struct node *head){
  int count = 0;
  if(head == NULL){printf("Empty linked list");}
  else{
    for(struct node *ptr=head;ptr!=NULL;ptr=ptr->link){count++;}
  }
  printf("%d",count);
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  current = malloc(sizeof(struct node));
  current->data = 20;
  current->link = NULL;
  head->link->link->link = current;
  count(head);
}
*/

/*
//printing the data in singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void print(struct node *head){
  if(head == NULL){printf("Empty linked list");}
  else{
    for(struct node *ptr=head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
  }
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  current = malloc(sizeof(struct node));
  current->data = 20;
  current->link = NULL;
  head->link->link->link = current;
  print(head);
}
*/

/*
// at a node at end or append a node in single linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void append(struct node *head, int data){
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;
  struct node *ptr = NULL;
  for(ptr=head;ptr->link!=NULL;ptr=ptr->link){}
  ptr->link = temp;
}

void print(struct node *head){
  if(head == NULL){printf("Empty linked list");}
  else{
    for(struct node *ptr=head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
  }
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  current = malloc(sizeof(struct node));
  current->data = 20;
  current->link = NULL;
  head->link->link->link = current;
  append(head,25);
  print(head);
}
*/

/*
// insert an node at end or append without loop
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

struct node* append(struct node *ptr, int data){
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;
  ptr->link = temp;
  return temp;
}

void print(struct node *head){
  if(head == NULL){printf("Empty linked list");}
  else{
    for(struct node *ptr=head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
  }
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *ptr = head;
  ptr = append(ptr,10);
  ptr = append(ptr,15);
  ptr = append(ptr,20);
  ptr = append(ptr,25);
  print(head);
}
*/
/*
//insert the node at the begining
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

struct node * addAtBegining(struct node *head, int data){
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = head;
  head = temp;
  return head;
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  head = addAtBegining(head,0);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}
*/
/*
//insert the node at the begining method 2
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void addAtBegining(struct node **head, int data){
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = *head;
  *head = temp;
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  addAtBegining(&head,0);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}*/

/*
//add at particular position
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void addAtPosition(struct node *head, int data, int pos){
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;
  struct node *ptr = head;
  while(pos!=2){
    ptr=ptr->link;
    pos--;
  }
  temp->link = ptr->link;
  ptr->link = temp;
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  addAtPosition(head,67,4);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}
*/

/*
// delete element in the begining
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};
struct node* deleteAtBegining(struct node *head){
  if(head == NULL){printf("Empty linked list");}
  struct node *temp = head;
  head = head->link;
  free(temp);
  temp = NULL;
  return head;
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  head = deleteAtBegining(head);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}*/


/*
// delete elemet at the end method 1
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

struct node* deleteAtEnd(struct node *head){
  if(head == NULL){printf("Empty linked list");}
  else if(head->link == NULL){free(head); head=NULL;}
  else{
    struct node *temp1 = head;
    struct node *temp2 = head;
    while(temp1->link != NULL){
      temp2 = temp1;
      temp1 = temp1->link;
    }
    temp2->link = NULL;
    free(temp1);
    temp1 = NULL;
  }
  return head;
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  head = deleteAtEnd(head);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}
*/

/*
// delete elemet at the end method 2
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void deleteAtEnd(struct node *head){
  if(head == NULL){printf("Empty linked list");}
  else if(head->link == NULL){free(head); head=NULL;}
  else{
    struct node *temp = head;
    while(temp->link->link != NULL){
      temp = temp->link;
    }
    free(temp->link);
    temp->link = NULL;
  }
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  deleteAtEnd(head);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}
*/

/*
//delete at particular position
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void deleteAtPosition(struct node **head, int position){
  struct node * previous = *head;
  struct node * current = *head;
  if(*head == NULL){printf("Empty linked list");}
  else if(position == 1){
    *head = current->link;
    free(current);
    current = NULL;
  }
  else{
    while(position != 1){
      previous = current;
      current=current->link;
      position--;
    }
    previous->link = current->link;
    free(current);
    current = NULL;
  }

}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  deleteAtPosition(&head,1);
  for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}
}
*/

/*
//delete entire single sinked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

struct node * deleteEntireLinkedList(struct node *head){
  struct node *temp = head;
  while(temp != NULL){
    temp=temp->link;
    free(head);
    head = temp;
  }
  return head;
}

int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  head = deleteEntireLinkedList(head);
  if(head == NULL){printf("deleted sucefully");}
  else{for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}}
}
*/

/*
//reverse a singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

struct node *reverse(struct node *head){
  struct node *prev = NULL;
  struct node *next = NULL;
  while(head != NULL){
    next = head->link;
    head->link = prev;
    prev = head;
    head = next;
  }
  head = prev;
  return head;
}


int main(){
  struct node *head = malloc(sizeof(struct node));
  head->data = 5;
  head->link = NULL;
  struct node *current = malloc(sizeof(struct node));
  current->data = 10;
  current->link = NULL;
  head->link = current;
  current = malloc(sizeof(struct node));
  current->data = 15;
  current->link = NULL;
  head->link->link = current;
  current  = malloc(sizeof(struct node));
  current->data = 20;
  current->link = NULL;
  head->link->link->link = current;
  current  = malloc(sizeof(struct node));
  current->data = 25;
  current->link = NULL;
  head->link->link->link->link = current;
  head = reverse(head);
  if(head == NULL){printf("Empty linked list");}
  else{for(struct node *ptr = head;ptr!=NULL;ptr=ptr->link){printf("%d\n",ptr->data);}}
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void display(struct node *head){
    printf("The elements in the linked list are ");
    for(struct node *ptr = head; ptr != NULL; ptr = ptr->link){printf("%d->",ptr->data);}
    printf("NULL");
}
void append(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    struct node *ptr = NULL;
    for(ptr = head; ptr->link != NULL; ptr = ptr->link){}
    ptr->link = temp;
}

struct node *reverse(struct node *head){
  struct node *prev = NULL;
  struct node *next = NULL;
  while(head != NULL){
    next = head->link;
    head->link = prev;
    prev = head;
    head = next;
  }
  head = prev;
  return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    int n, d, i;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    scanf("%d",&d);
    head->data = d;
    for(i=1;i<n;i++){
        scanf("%d",&d);
        append(head,d);
    }
    display(head);
    head = reverse(head);
    display(head);
}
*/ 
