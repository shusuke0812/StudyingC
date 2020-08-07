#include <stdio.h>

#include "max.h"

int main(void) {
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);
	printf("max of (a,b) = %d\n", max(a,b));
	return 0;
}
