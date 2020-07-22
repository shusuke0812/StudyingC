書籍「苦しんで覚えるC言語」を参考
====
　
## 概要


### calc_cost.c
#### 金額と個数を入れて税込価格の合計額が算出されるプログラム
- 標準入出力
- 整数型、実数型、文字列型（charの配列）
- 条件分岐（if, switch）
- 繰り返し
- 関数定義
- ファイル出力（出力ファイル：calc_cost_result.txt）
- 構造体
- マクロ機能  
  
### find_binary.c
#### バイナリデータファイル出力するプログラム  
- バイナリ出力
- ファイル出力（出力ファイル：find_binary_result.dat）  
  
### practice_pointer.c  
#### ポインタの使い方を記述したプログラム
- ポインタ変数定義
- アドレス出力
- ポインタ変数を引数に持つ関数の定義
- 配列メモリの動的確保  
  
### CalcTriangleArea/main.c  
#### 任意の整数を標準入力して、三角形の面積を求めるプログラム  
- 標準入出力
- 複数のソースファイルを定義して呼び出しコンパイル
- ヘッダファイルの定義と呼び出し
  
## 実行方法
- main.c（mainの部分は上記のファイル名を入れる）をコンパイルする  
- コンパイル方法は、
  
```bash
gcc main1.c main2.c
```
  
- 実行方法は、コンパイルで生成されたa.outに対して
```bash
./a.out
```
 
- Makeファイルの使い方は、
```bash
$ vim Makefile
result: main.c calc_area.c  # ターゲットを指定
  gcc main.c calc_area.c    # コマンドラインを指定（この行はタブで先頭を空ける）
$ make result
$ ./a.out
```
   
