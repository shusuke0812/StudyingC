/*
 * ポインタの使い方を練習するプログラム
 */

#include <stdio.h>

int main(void) {
	int *p, i;
	int *q;

	// iのアドレスをポインタ変数pに代入する
	p = &i;

	printf("p=%p\n", p);
	printf("p=%p\n", &i);
	printf("p=%p\n", q);

	return 0;
}
