#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap so nguyen duong a ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b ");
	scanf("%d", &b);
	while(b!=0){
		int r = a % b;
		a = b;
		b = r;
	}
	printf("uoc chung lon nhat cua a va b la %d", a);
}
