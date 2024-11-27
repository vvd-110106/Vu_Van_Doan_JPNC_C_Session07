#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int a,b;
	printf("Mang ban dau la: ");
	for(int i=0; i<5; i++){
		printf("%d", arr[i]);
		if(arr[i]%2==0){
			arr[i]+=3;
		}else{
			arr[i]+=2;
		}
	}
	printf("\nMang sau khi kiem tra lai la: ");
	for(int i=0; i<5; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
