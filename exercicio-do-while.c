#include <stdio.h>
int main()
{
        int x, y, c, m, a, b;
	x = 5;
	y = 1;
	c = 15;
	m = 20;
	do{
   		c = c + 1;
    	        a = x;
    	        b = y;
    	        x = b;
    	       y = a + b;
           	printf("%d ", a);
	}while(c < m);
}
