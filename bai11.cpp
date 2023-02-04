/*Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N*/
#include<stdio.h>
#include<iostream>
using namespace std;
int factorial(int i) {
    if (i == 1)
        return 1;
    else
        return (i * factorial(i - 1));
}
int main()
{
  int n;
  int x=0;
  float  S=0;
     cout << "Nhap so ban muon nhan den: " << endl;
     cin >> n;
    while (x<n)
    {
        x++;
        S= S+ factorial(x);
    }
  cout << "Ket qua la: " << S;
  return 0;
}
