/*Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)*/
#include <iostream>
using namespace std;
int main()
{
    double a=0;
    double n;
    double S=0;
    cout << "Nhap so muon duoc nhan chia boi 1 va cong voi so do cong 1 tu 1/1*2 den:" << endl;
    cin >> n;
    while (a<n)
    {
        a++;
        S = S+(1/(a*(a+1)));
        
    }
    cout << "Dap an la: " << S;
    return 0;
}
