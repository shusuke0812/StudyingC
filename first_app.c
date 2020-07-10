#include <stdio.h>

int main(void) {

  double tax = 1.1;

	// printf("Hello World");
	printf("Hello \n");
	printf("World \n");

	// P72 Q6
	printf("Intel\t: Core i7\n");
	printf("AMD\t: Phenom II\n");

	// 数値を表示させる
	printf("%d個あたり%d円です\n", 1, (int)(100*tax));
	printf("税率は%3.2fです\n", tax);

	return 0;
}
