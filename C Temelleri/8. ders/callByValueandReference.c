#include <stdio.h>

void callByValue(int, int); /* Prototype */
void callByReference(int *a, int *b);


int main() {
	int n1 = 10, n2 = 20;


	callByValue(n1, n2);
	printf("call by value n1: %d, n2: %d\n", n1, n2);


	callByReference(&n1, &n2);
	printf("call by reference n1: %d, n2: %d\n", n1, n2);
	return 0;
}

void callByValue(int a, int b) {
	a = 20;
	b = 10;
}

void callByReference(int *a, int *b) {
	*a = 20;
	*b = 10;

}