#include<stdio.h>
int main(){
	int a, b, m, tong, hieu, tich;
	double thuong;
	printf("Nhap so nguyen thu nhat ");
	scanf("%d", &a);
	printf("Nhap so nguyen thu hai ");
	scanf("%d", &b);
	do{
	printf("\n\n");
	printf("                 CALCULATOR          \n\n1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\n\n");
	printf("Nhap STT cua chuc nang can dung ");
	scanf("%d", &m);
	if(m==1){
		tong = a + b;
		printf("Tong 2 so la %d", tong);
	}else if(m==2){
		hieu = a - b;
		printf("Hieu 2 so la %d", hieu);
	}else if(m==3){
		tich = a * b;
		printf("Tich 2 so la %d", tich);
	}else if (m==4){
		thuong = a / b;
		printf("Thuong 2 so la %f", thuong);
	}else if(m==5){
		printf("BYE");
	}else{
		printf("Khong hop le");
	}
	
	
}while(m!=5);
return 0;
}

