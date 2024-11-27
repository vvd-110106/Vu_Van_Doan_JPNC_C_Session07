#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int kiemtra=0;
	for(int i=0; i<5; i++){
		if(arr[i]%2==0){
			printf("Cac so chan trong mang la: %d \n", arr[i]);
			kiemtra=1;
		}
		}
		if(!kiemtra){
			printf("Khong co so chan");
	}
}
