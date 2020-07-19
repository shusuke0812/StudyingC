/*
 * バイナリデータでファイル出力する 
 */

#include <stdio.h>

int main(void) {
	
	FILE *file;

	int buf = 100;

	file = fopen("find_binary_result.dat", "wb");
	fwrite(&buf, sizeof(buf), 1, file);
	
	return 0;
}

