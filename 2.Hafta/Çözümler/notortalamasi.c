#include<stdio.h>
int main(){
	float a,b,c;
	printf("ilk sýnav notunuzu yazýn\n");
	scanf("%f",&a);
	printf("ikinci sýnav notunuzu yazýn\n");
	scanf("%f",&b);
	printf("final notunuzu yazýn\n");
	scanf("%f",&c);
	float ort=a*0.3+b*0.3+c*0.4;
	printf("%.2f",ort);
	return 0;
}
