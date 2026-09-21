#include<stdio.h>
#define size 5
void enqueue(int);
void dequeue();
void display();
int item[size],front=-1,rear=-1;
void enqueue(int value){
	if(rear==size-1){
		printf("queue is full ");
	}
	else{
		if(front==-1)
			front=0;
			rear++;
			item[rear]=value;
		}
	}
	void dequeue(){
		if(front==-1){
		printf("stack is empty");
		}
		else{
			printf("deleted is %d",item[front]);
			front++;
			if(front>rear)
				front=rear=-1;
			
		}
	}
void display(){
	if(rear==-1){
		printf("queue is empty");
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			printf("%d ",item[i]);
		}
	}
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	display();
	dequeue();
	dequeue();
	dequeue();
	return 0;
	
}
