#include <stdio.h>
int main(void)
{
	int a, b;
	
	
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	while((a > 0) && (b > 0)){
		if (a > b)
		{
			a = a - b;
		} else{
			b = b - a;
		}
	}
	printf("calculo = %d",(a + b));
	return 0;	
}
