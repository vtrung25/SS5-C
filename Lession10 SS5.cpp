#include<stdio.h>
int main(){
	int so;
	printf("Nhap 1 so nguyen ");
	scanf("%d", &so);
	while(so>0){
		int chuso = so % 10;
		printf("%d\n", chuso);
		so = so / 10;
	}
	return 0;
}
