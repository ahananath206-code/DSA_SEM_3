#include<stdio.h>
int binarysearch(int arr[],int n,int key){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if (arr[mid]==key)
		return mid;
		else if(key<arr[mid])
		high=mid-1;
		else
		  low=mid+1;
	} 
	return -1;
}
int main(){
	int arr[6]={23,45,56,78,89,90};
	int n= sizeof (arr)/sizeof (arr[0]);
	int key=78;
	int result=binarysearch(arr,n,key);
	if(result!=-1)
	printf("found at %d",result);
	else
	printf("not found");
	return 0;
}
