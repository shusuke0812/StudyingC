/*
 * ポインタの使い方を練習するプログラム
 */

#include <stdio.h>

void func(int *pvalue);

int main(void) {
	int *p, i;
	int *q;
	int value = 10;

	// iのアドレスをポインタ変数pに代入する
	p = &i;

	printf("p=%p\n", p);
	printf("p=%p\n", &i);
	printf("p=%p\n", q);

	// ポインタ変数を引数にする
	printf("&value= %p\n", &value);
	func(&value);
	printf("value= %d\n", value);

	return 0;
}

void func(int *pvalue) {
	printf("pvalue= %p\n", pvalue);
	*pvalue = 100;
	return;
}
