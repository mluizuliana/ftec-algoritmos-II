#include <stdio.h>
int main()
{
	int a, b, c;
	float x, y;
	int r1, r2, r3;
	
	a = 1;
	b = 0;
	c = 1;
	x = 2.5;
	y =	3.5;
	
	if(c == 1 || x -y > 0){
		r1 = 1;
	}else{
		r1 = 0;
	} 
	
	if(((a==1 && b == 1)|| c ==1) && (x > y || !(a == 1))){
		r2 = 1;
	}else{
		r2 = 0;
	}
	
	if((b == 1 || x - y < 0) && ((b == 1 && !(a == 1)) || !(c == 1))){
		r3 = 1;
	}else {
		r3 = 0;
	}
	printf("r1 %d | r2 %d | r3 %d\n", r1, r2, r3);
}
