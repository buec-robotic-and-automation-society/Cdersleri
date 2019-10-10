#include <stdio.h>



int main() {
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+'){
		printf("%d",a+b);
	}
	if(c=='-'){
		printf("%d",a-b);
	}
	if(c=='*'){
		printf("%d",a*b);
	}
	if(c=='/'){
		float d=a,e=b;
		printf("%f",d/e);
	}
	return 0;
}
