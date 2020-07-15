/*
 * 金額と個数を入力して税込の合計額を算出する 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
	int price, qty, tax_judge, total_price, unit_price;
  double tax;

	// 金額と個数を入力
	printf("金額、個数とスペース区切りで入力して下さい：例）100 2\n");
	scanf("%d%d", &price, &qty);

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
	unit_price = (int)(price*tax);
	total_price = (int)(price*tax*qty);
	printf("1個あたり%d円です\n", unit_price);
	printf("税率は\t %3.2fです\n", tax);
	printf("%d個の購入で合計%d円です\n", qty, total_price);

	return 0;
}
