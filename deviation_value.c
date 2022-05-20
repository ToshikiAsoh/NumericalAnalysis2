//これは数値解析学2の第3回小レポート課題に特化したプログラム
//N人のデータ(うち、一人だけが100点満点(A氏)でそれ以外は0点となる場合のA氏の偏差値を求める式)
//Nを大きくしていくとどうなるか

#include <stdio.h>
#include <math.h>

int main(){
  int N;
  double ave, s, dev;

  printf("N = ");
  scanf("%d", &N);
  
  ave = 100 / N;
  s = sqrt(((ave)*(ave) * (N-1) + (100-ave)*(100-ave)) / N);
  dev = (100 - ave) / s * 10 + 50;

  printf("人数N人におけるA氏(←100点)の偏差値: %lf\n", dev);
  return 0;
}
