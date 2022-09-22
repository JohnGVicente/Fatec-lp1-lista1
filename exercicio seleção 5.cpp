#include<stdio.h>
main(){
	int i;
	printf("digite sua idade:");
	scanf ("%d",&i);
	if(i>=5&&i<=7){
		printf("\nsua categoria e infantil A");
	}else if(i>=8 && i<=10){
		printf("\nsua categoria e infantil B");
	}else if(i>=11 && i<=13){
		printf("\nsua categoria e juvenil A");
	}else if(i>=14 && i<=17){
		printf("\nsua categoria e juvenil B");
	}else{
		printf("\nsua categoria adulto");
	}
}
