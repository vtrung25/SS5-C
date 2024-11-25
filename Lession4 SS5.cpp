#include<stdio.h>
int main(){
	int a, tich;
	printf("Nhap mot so nguyen ");
	scanf("%d", &a);
	for(int i = 1; i < 10; i++){
		tich = a * i;
		printf("%d x %d = %d\n", a, i, tich);
	}
	
			
		
	return 0;
}
