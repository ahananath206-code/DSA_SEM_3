#include<stdio.h>
int linearsearch(int arr[],int n,int key){
	
int i;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;

}
int main(){
	int arr[5]={34,45,23,78,96};
	int n= sizeof (arr)/sizeof (arr[0]);
	int key=78;
	int result= linearsearch(arr,n,key);
	if(result!=-1)
	printf("found at %d",result);
	else
	printf("not found");
}
