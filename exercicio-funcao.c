#include <stdio.h>
#include <stdlib.h> 

int w=1, x=12, y=13, z=14;

void foo(int y)
{
	int z=y;
	printf("\n\n%d %d %d %d", w,x,y,z);
}

main(void){
	int x=7, w=5;
	foo(w);
	printf("\n\n%d %d %d %d.", w, x, y, z);
	system("pause");
}
