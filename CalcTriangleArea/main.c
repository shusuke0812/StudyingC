/*
 * 任意の整数を入力して、三角形の面積を求めるプログラム
 */

#include <stdio.h>
#include "calc_area.h"

int main(void) {
	int result_value;
	result_value = calc_triangle_area(10, 20);
	printf("%d\n", result_value);
	
	return 0;
}
