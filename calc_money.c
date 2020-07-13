#include <stdio.h>

int main(void) {
  
	int data;
  double tax = 1.1;

	// 金額を入力
	scanf("%d", &data);

	// 税込金額を表示させる
	printf("%d個あたり%d円です\n", 1, (int)(data*tax));
	printf("税率は\t %3.2fです\n", tax);

	return 0;
}
