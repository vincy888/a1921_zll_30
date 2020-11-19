#include"listg.h"
int main(int argc,char **argv)
{	
	List *list = (List *)malloc(sizeof(List));
	initList(list);
	addHead(list,4);
	addHead(list,5);
	addHead(list,6);
	addHead(list,1);

	printList(list);
	printf("链表的元素个数为： %d\n",getLen(list));
	printList(list);
	printf("链表的第2个元素为： %d\n",Find(list,2));


	CreatList();
    	Delect();
    	Print();
    	printf("\n");
    	return 0;	
}
