/*Bài 10: Tính T(x, n) = x^n*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int n;
  int x;
     cout << "Nhap so dau tien ban muon nhan: " << endl;
     cin >> n;
     cout << "Nhap so thu hai ban muon nhan: " << endl;
     cin >> x;
  cout << "Ket qua la: " << x*n;
  return 0;
}
