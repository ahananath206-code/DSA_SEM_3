#include<stdio.h>
void insertion(int arr[],int n,int pos){
	for(int i=n;i>pos;i--){
		arr[i]=arr[i-1];
		
	}
	arr[pos]=30;
}

int main(){
	int n=4;
	int pos=2;
	int arr[6]={10,20,40,50};
	insertion(arr,n,pos);
	n++;
	printf("array after insertion");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;


	
}
