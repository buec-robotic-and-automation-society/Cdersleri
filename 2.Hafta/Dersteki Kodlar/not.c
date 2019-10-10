#include<stdio.h>
int main(){
	int puan;
	scanf("%d",&puan);
	if(puan>=85){
		printf("basarili");
	}
	else if(puan<85 && puan>=70){
		printf("iyi");
	}
	else if(puan<70){
		printf("kotu");
	}
	return 0;
}
