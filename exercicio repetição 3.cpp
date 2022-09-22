#include<stdio.h>
main(){
	int n1,n2,soma=0;
	
	
		printf("valor:");
		scanf("%d",&n1);
		printf("valor:");
		scanf("%d",&n2);
	if(n1>n2){
		
		printf("valor errado");
		return 0;
		
	}while(n1<=n2){
		
		soma+=n1;
		
		
		n1++;
		
	}
	printf("\n%d",soma);	
	
		
	
		
		
		
}
