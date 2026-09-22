#include<stdio.h>
void bubblesort(int arr[],int size){
	for(int step=0;step<size-1;++step){
		for(int i=step;i<size-step-1;++i){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=arr[i];
			}
		}
		printf("internal array");
		for(int i=0;i<size;i++){
			printf("%d",arr[i]);
		}
	}
}
int main(){
	int arr[5]={45,24,78,33,56};
	int i;
	int size= sizeof (arr)/sizeof (arr[0]);
	bubblesort(arr,size);
	printf("sorted array/n");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 0;
	
}
