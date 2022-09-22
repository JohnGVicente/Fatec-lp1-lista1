#include<stdio.h>
main(){
	float n1,n2,mf;
	printf("digite a primeira nota: ");
	scanf("%f",&n1);
	printf("\ndigite a segunda nota: ");
	scanf("%f",&n2);
	mf=(n1+n2)/2;
	if(mf>=6){
		printf("media final: %f\n parabens voce passou !",mf);
		
	}else{
		printf("media final: %f\n reprovado !",mf);
	}
}
