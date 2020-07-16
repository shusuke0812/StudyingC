/*
 * 金額と個数を入力して税込の合計額を算出する 
 */

#include <stdio.h>
#include <stdlib.h>

int discount(int);

int main(void) {
  
	// int i;
	int price, qty, tax_judge, total_price, unit_price;
  double tax;

	// 金額と個数を入力
	do {
		printf("金額、個数とスペース区切りで入力して下さい：例）100 2\n");
		scanf("%d%d", &price, &qty);
	} while(price<0 || qty<0);

	// 持ち帰りか否かを入力する（軽減税率判定用）
	do {
		printf("持ち帰りですか：Yes = 1, No = 0\n");
		scanf("%d", &tax_judge);
	} while(tax_judge != 0 && tax_judge !=1);

	switch (tax_judge) {
	case 0:
		tax = 1.10;
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
	printf("\n");
	printf("1個あたり：%d円\n", unit_price);
	printf("税率：%3.2f\n", tax);
	printf("%d個の購入で合計：%d円\n", qty, total_price);

	// 1~5割引きの金額を表示
	printf("\n");
	discount(total_price);

	return 0;
}

int discount(int total_price) {
	int i;
	for (i=1; i<=5; i++) {
		printf("%d割引：\t%d円\n", i, (int)(total_price - total_price * i / 10));
	}
	return 0;
}
