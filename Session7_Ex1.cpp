#include<stdio.h>

int main(){
	// khai bao gia tri cho mang
	int arr[]={1, 2, 3, 4, 5};
	// do dai cua mang ( cong thuc )
	int length = sizeof(arr) / sizeof(int);
	// In ra tung phan tu trong mang
	for(int i = 0; i<length; i++){
		printf("Phan tu thu %d trong mang la: %d\n", i+1, arr[i]);
	}
	// In ra do dai cua mang
	printf("Do dai cua mang la: %d", length);
	return 0;
}
