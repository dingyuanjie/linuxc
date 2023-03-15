#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
int data;
struct Node *next;
} Node, *LinkedList;










void printList(LinkedList L){
Node *p=L->next;
int i = 0;
while(p){
printf("di%d  %d\n",++i,p->data);
p=p->next;

}


}
LinkedList LinkedListCreateT(){


Node *L;
L =(Node *)malloc(sizeof(Node));
L->next = NULL;
Node *r;
r = L;
int x;

while(scanf("%d",&x)  != EOF){

Node *p;
p = (Node *)malloc(sizeof(Node));
p->data = x;
r->next = p;
r = p;
}
r->next = NULL;
return L; 
} 


int main(){
      LinkedList list;

        list =LinkedListCreateT(); 
	printList(list);


	return 0;
}
