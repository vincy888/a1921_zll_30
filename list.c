#include"listg.h"


void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
	return;
}
int getLen(List *list)
{
	Node *node = (Node*)malloc(sizeof(Node));
        node = list->head;
        int i = 0;
        while(node != NULL){
        	node = node->next;
          	i++;
        } 
  
	return i;
}
void addHead(List *list, DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	if(list->head == NULL){
	    list->tail = node;
	}else{
	node->next = list->head;
	}
	list->head = node;
 	return;
}	
 void delNode(List *list,DataType data){
	Node *prev = list->head;
	Node *node = prev->next;

	while(node != NULL){
		if(node->data == data){
			prev->next = prev->next->next;
		}
		else
		{
			prev->next = node;
		}
	}
	return;
}


Node *getNode(List *list,DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;

	while(node != NULL){
		if(data = node->data)
		{
			return node;
		}
		else
		{
			node = node->next;
		}
	}

	return NULL;
}


Node *Find(List *list,DataType data){
	if(data < 1)
		printf("请输入一个大于1的值！");
	Node *p = list->current;
	while(p && p->data != data){
		p = p->next;
	}
	return p;
}

void printList(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node:%d\n",i+1,node->data);
		node = node->next;
		i++;
	}
	printf("display finished\n");

	return;
}


void CreatList(){
	Node *p, *q, *r;
	p = q = (Node*)malloc(sizeof(Node));                                             
	p -> no = 1;
	for (int i=2; i<=n; i++){
        	r = (Node*)malloc(sizeof(Node));
        	r ->no = i;
        	q->next = r;
        	q = r;
	}
	q ->next= p;
	q = p;
	return ;

}

void Delect()
{   
	Node *p, *q;
    	int k = 0;
     	while (q->next != q){
        	k++;
         	if (k == m){
             		p->next = q->next;
             		free(q);
             		q = p->next;
             		k = 0;
         	}else{
             		p = q;
             		q = q->next;
         	}
     	}


}

void Print(){
	Node *q;
	printf("最后一个获胜者编号是: %d\n", q->no+1);
}


		
	
	
		



		

	
