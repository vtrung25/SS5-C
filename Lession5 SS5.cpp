#include<stdio.h>
int main(){
	int tich;
	printf("BANG CUU CHUONG\n");
	for(int i = 1; i<10; i++){
		printf("\n");
		for(int j = 1; j<10; j++){
		tich = i * j;
		printf("%d x %d = %d\n", i, j, tich);
	}
	}
	return 0;
}
