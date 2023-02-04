/*Bài 9: Tính T(n) = 1 x 2 x 3…x N*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int n;
  float S = 1;
     cout << "Nhap so ban muon nhan tu 1 den: " << endl;
     cin >> n;
  for(int x = 1; x <= n; x++){
    S = S * x;
  }
  cout << "Ket qua la: " << S;
  return 0;
}
