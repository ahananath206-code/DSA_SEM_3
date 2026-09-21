#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isfull(){
	return top == MAX-1;
}
int isempty(){
	return top==-1;
}
int push(int value){
	if(isfull()){
		printf("stack overflow");
	}
	else{
		top++;
		stack[top]=value;
		printf("pushed value =%d",value);
	}
}
int pop(){
	if(isempty()){
		printf("stack is empty nothing to pop\n");
		return-1;
	}
	else{
		int poppedvalue= stack[top];
		top--;
		return poppedvalue;
	}
}
int peek(){
	if(isempty()){
	
		printf("stack is empty");
		return -1;
	}
	return stack[top];
	}

void display(){
	int i;
	if(isempty()){
		return;
	}
	printf("stack elememt\n");
	for( i=top;i>0;i--){
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int main(){
	push(10);
	 push(20);
	 push(30);
	 push(40);
	 pop();
	 pop();
	 peek;
	display();
	printf("popped = %d",pop());
	printf("top element=%d",peek());
}
