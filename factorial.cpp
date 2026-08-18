#include<stdio.h>
int rec(int n){
	if(n==0||n==1){
		return 1;
	}
	int x;
	x=n*rec(n-1);
	return x;
}
int main(){
	int a;
	printf("which number factorial you want to calculate:");
	scanf("%d", &a);
	printf("factorial = %d",rec(a));
}
