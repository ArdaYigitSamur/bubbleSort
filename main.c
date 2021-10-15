#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, size_t n){
	int temp;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			//if(arr[j]>arr[j+1])
			//	swap(&arr[j],&arr[j+1]);
}

void obubbleSort(int* arr, size_t n){	
	int swapped;
	for(int i=0;i<n-1;i++){
		swapped=0;
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
				swapped=1;
			}
	if(swapped==0)
		break;
	}
	
}

int main(){
	int arr[10] = {0,2,5,7,1,8,4,9,6,3};
	size_t n= sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i] ); 
	}
}