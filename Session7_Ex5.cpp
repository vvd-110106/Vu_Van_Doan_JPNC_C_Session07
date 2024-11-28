#include<stdio.h>

int main(){
    int arr[5] = {1, 9, 2, 5,8};
	int i;
	for(i = 0;i< 5; i++){
		printf("%d \n", arr[i]);
    }
    int max = arr[0];
    int min = arr[0]; 
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    } 
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    return 0;
}
