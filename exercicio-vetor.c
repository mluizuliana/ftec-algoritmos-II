#include <stdio.h>
#include <math.h> /* biblioteca fun��es matem�ticas para realizar opera��es comuns, como fun��es trigonom�tricas, exponenciais, logar�tmicas e opera��es matem�ticas b�sicas. Ela cont�m uma variedade de fun��es matem�ticas que podem ser usadas em programas C para realizar c�lculos mais complexos. Por exemplo, fun��es como sin(), cos(), sqrt(), exp(), log(), entre outras, est�o dispon�veis na biblioteca math.h */
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
