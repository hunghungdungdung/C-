/*Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1*/
#include <iostream>
using namespace std;
int main()
{
    double a=0;
    double n;
    double S=0;
    cout << "Nhap so muon duoc chia cho so do cong 1 tu 1/2 den:" << endl;
    cin >> n;
    while (a<n)
    {
        a++;
        S = S+(a/(a+1));
        
    }
    cout << "Dap an la: " << S;
    return 0;
}
