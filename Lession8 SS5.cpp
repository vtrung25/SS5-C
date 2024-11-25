#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap so nguyen duong a ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b ");
	scanf("%d", &b);
	int tich = a * b;
	while(b!=0){
		int r = a % b;
		a = b;
		b = r;
		
	}
	int BCNN = tich / a;
	printf("boi chung nho nhat cua a va b la %d", BCNN);
	return 0;
}
