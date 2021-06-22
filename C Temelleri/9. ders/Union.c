#include <stdio.h>

struct koordinat { //struct kismini daha sonra union olarak degistirin
	int x;
	int y;
};

int main() {
	struct koordinat nokta; //struct kismini daha sonra union olarak degistirin
	
	printf("size:%d\n",sizeof(nokta));
	
	
	int *xPtr,*yPtr;
	xPtr = &nokta.x;
	yPtr = &nokta.y;

	nokta.x    = 11;	
	printf("x = %d   y = %d\n",nokta.x, nokta.y);
	printf("xPtr = %p   yPtr = %p\n",xPtr, yPtr);

	nokta.y    = 22;	
	printf("x = %d   y = %d\n",nokta.x, nokta.y);
	printf("xPtr = %p   yPtr = %p\n",xPtr, yPtr);

	return 0;
}
