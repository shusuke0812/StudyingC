/*
 * ポインタの使い方を練習するプログラム
 */

#include <stdio.h>
#include <stdlib.h>

void func(int *pvalue);

int main(void) {
	int *p, i;
	int *q;
	int value = 10;
	int *heap;

	// 配列メモリの動的確保
	heap = (int *)malloc(sizeof(int) * 10);
	if (heap == NULL) {
		exit(0);
	}
	for (i=0; i<10; i++) {
		heap[i] = i;
	}
	printf("mallocによる配列の動的確保\n");
	printf("%d\n", heap[5]);
	free(heap);

	// iのアドレスをポインタ変数pに代入する（pはiを指す）
	p = &i;

	printf("p=%p\n", p);
	printf("i=%d\n", *p);
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
