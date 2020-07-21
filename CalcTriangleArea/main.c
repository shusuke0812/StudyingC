/*
 * 任意の整数を入力して、三角形の面積を求めるプログラム
 */

#include <stdio.h>
#include "calc_area.h"

int main(void) {
	int result_value;
	int base, height;

	// 底辺と高さの標準入力
	do {
		printf("底辺 高さを入力してください：（例）100 20\n");
		scanf("%d%d", &base, &height);
	} while(base<0 || height<0);

	result_value = calc_triangle_area(base, height);
	printf("%d\n", result_value);
	
	return 0;
}
