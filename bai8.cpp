/*Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2*/
#include <iostream>
using namespace std;
int main()
{
    double a=00;
    double n;
    double S=0;
    cout << "Nhap so muon duoc nhan doi cong 1 va chia boi so do nhan doi cong 2 tu 1/2 den:" << endl;
    cin >> n;
    while (a<n)
    {
        S = S+(((2*a)+1)/((2*a)+2));
        a++;
    }
    cout << "Dap an la: " << S;
    return 0;
}
