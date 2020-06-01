#include <stdio.h>

void main() {
	
	float HN, HE, total;
	
	printf(" digite o total de horas normais trabalhadas :");
	
	scanf("%f",& HN);
	
	printf(" digite o total de horas extras trabalhadas: ");
	
	scanf("%f",& HE);
	
	total=HN*10+HE*15 ;
	
	printf(" o total será de : %f",total);
	

}
