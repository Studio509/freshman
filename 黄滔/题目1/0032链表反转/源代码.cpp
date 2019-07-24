#include <iostream>
#include<string>
using namespace std;
struct Node{
	int data;
	int go;
	int next;
	struct Node*link;
};
typedef struct Node *List;
List P;
void Attach(int first,int data,int Next,List *Rear)
{
	/*将数据给一个新建的结点*/
	List p;
	p=(List)malloc(sizeof(struct Node));
	p->go=first;
	p->next=Next;
	p->data=data;
	//将新的结点加入到链表
	p->link=NULL;
	(*Rear)->link=p;//将P插入
	*Rear=p;//pRear 后移
}
void readList(int N){
   int next;
   int first;
   int data;
   List rear,t;
   P=(List)malloc(sizeof(struct Node));//空结点
   P->link=NULL;
   rear=P;
	while(N--)
   {
	   cin>>first>>data>>next;
	   Attach(first,data,next,&rear);
   }
	t=P;P=P->link;
	delete t;
}
List ad (int first,List P,int N)
{ 
	List rear,front,temp,rp;
	rear=(List)malloc(sizeof(struct Node));//新链表的头结点
    front=rear;
	 rp=P;//P的针
	while(rp)
	{ 
		if(rp->go==first)
		{    
			first=rp->next;
			Attach(rp->go,rp->data,rp->next,&rear);
			if(first==-1)
		    {
				rear->link=NULL;
				temp=front;
				front=front->link;
				free(temp);
				return front;
	        }
			rp=P;
			continue;
	       }
		rp=rp->link;
	}
}
List reverse(int k,List P){
	List rear,front,t,rp;
	int i,j=k;
	rp=P;
	rear=(List)malloc(sizeof(struct Node));
	front=rear;
	while(k--){//反转K项	
	 for(i=0;i<k;i++)
	 {
		rp = rp->link;
	 }
	Attach( rp->go,rp->data,rp->next,&rear);
	 rp=P;
    }

	for(i=0;i<j;i++)//
	{
	rp = rp->link;
	}
	while(rp)
	{
	Attach( rp->go ,rp->data,rp->next,&rear);
	rp = rp->link;
	}
	t=front;
	front=front->link;
	delete t;
	if(front->next ==-1){
		front->next=front->link->go;
	}
	List temp;
	temp=front;	

	while(temp->link)
	{ 	
		temp->next =temp->link->go;//头指针的尾坐标= 下一个的头坐标
		temp=temp->link;
		
	}
	return front;
}
void printList(List t){
	List rear=t; 
	
	while(rear->link)
	{
		printf("%05d %d %05d\n",rear->go,rear->data,rear->next);
		rear=rear->link;
	}  
	printf("%05d %d -1\n",rear->go,rear->data);
}
int main()
{
	int first,data,next;
	int N,K;
	List list;
	cin>>first>>N>>K;
	if(N==1)
	{
       cin>>first>>data>>next;
	   printf("%05d %d -1\n",first,data,next);
	}
	else{
		readList(N);
		list=reverse(K,ad(first,P,N));
		printList(list);
	}
	return 0;
}
