/*
 * 金額と個数を入力して税込の合計額を算出する 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
	int data, qty, tax_judge;
  double tax;

	// 金額と個数を入力
	printf("金額、個数とスペース区切りで入力して下さい：例）100 2\n");
	scanf("%d%d", &data, &qty);

	// 持ち帰りか否かを入力する（軽減税率判定用）
	printf("持ち帰りですか：Yes = 1, No = 0\n");
	scanf("%d", &tax_judge);

	switch (tax_judge) {
	case 0:
		tax = 1.1;
		break;
	case 1:
		tax = 1.08;
		break;
	default:
		printf("持ち帰りの場合は1、そうでない場合は0を入力してください\n");
		exit(0);
	}

	// 税込金額を表示させる
	printf("1個あたり%d円です\n", (int)(data*tax));
	printf("税率は\t %3.2fです\n", tax);
	printf("%d個の購入で合計%d円です\n", qty, (int)(data*tax*qty));

	return 0;
}
