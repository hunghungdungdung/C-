/*Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n*/
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int n;
  int x;
  int y=0;
  double  S=0;
     cout << "Nhap so ban muon nhan: " << endl;
     cin >> x;
     cout << "Nhap khoang ban muon nhan den: " << endl;
     cin >> n;
    while (y<n)
    {
        y++;
        S= S+ pow(x,y);
    }
  cout << "Ket qua la: " << S;
  return 0;
}
