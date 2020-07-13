/*
 * 金額と個数を入力して税込の合計額を算出する 
 */

#include <stdio.h>

int main(void) {
  
	int data, qty;
  double tax = 1.1;

	// 金額と個数を入力
	scanf("%d%d", &data, &qty);

	// 税込金額を表示させる
	printf("1個あたり%d円です\n", (int)(data*tax));
	printf("税率は\t %3.2fです\n", tax);
	printf("%d個の購入で合計%d円です\n", qty, (int)(data*tax*qty));

	return 0;
}
