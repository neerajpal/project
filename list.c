#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int i;
	struct node *next;
} list;
list* add(list * head,int data){
	list* node=(list*)malloc(sizeof(list));
	if(head==NULL) {
		head=node;
		node->i=data;
		node->next=NULL;
	}
	else{
		node->i=data;
		node->next=head;
		head=node;
	}
}
void print(list* head){
	list* struc;
	struc=head;
	while(struc!=NULL){
		printf("%d ",struc->i);
		struc=struc->next;
	}
}
int main(void) {
	int n,i,data;
	list* head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&data);
		add(head,data);
		print(head);
	}
	print(head);	
	return 0;
}
