#include<stdio.h>

int main(){
	int a;
	printf("Ban hay nhap vao so phan tu cua mang: ");
	scanf("%d", &a);
	int arr[a];
	for(int i=0; i<a; i++){
		printf("Phan tu thu %d la: ", i+1);
		if(arr[i]%2!=0){
			scanf("%d", &arr[i]); 
		}else{
			printf("Ban hay nhap lai vao chuong trinh mot so le:");
		}
	}
	return 0;
}
