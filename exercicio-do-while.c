#include<stdio.h>
int main(void)
{
	int face;
	do{
		printf("\nDigite o numero da Face do dado: ");
		scanf("%d",&face);
		if (face < 1 || face > 6)
		{
			printf("Face do dado Invalida - Redigite!");
		}
	}while(face <1 || face > 6);
	
	switch(face)
	{
		case 1:
			printf("Face 1");
			break;
		case 2: 
			printf("Face 2");
			break;
		case 3: 
			printf("Face 3");
			break;
  		case 4: 
			printf("Face 4");
			break;
		case 5: 
			printf("Face 5");
			break;	
		case 6: 
			printf("Face 6");
			break;	
	}
}
