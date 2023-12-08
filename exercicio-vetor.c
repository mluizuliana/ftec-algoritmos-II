#include <stdio.h>
#include <math.h> /* biblioteca funções matemáticas para realizar operações comuns, como funções trigonométricas, exponenciais, logarítmicas e operações matemáticas básicas. Ela contém uma variedade de funções matemáticas que podem ser usadas em programas C para realizar cálculos mais complexos. Por exemplo, funções como sin(), cos(), sqrt(), exp(), log(), entre outras, estão disponíveis na biblioteca math.h */
main(void)
{
	float a[6], b[6], c[12];
	int i, w;
	w=0; 
	for (i=0; i<6; i++)
	{
		a[i] = pow(i,2);
		b[i] = a[i]+2;
		c[w] = a[i];
		w++;
		c[w] = b[i];
		w++;
	}
}
