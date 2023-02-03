/*Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a=0;
    double n;
    double S=0;
    cout << "Nhap so muon duoc nhan doi va chia boi 1 tu 1/2 den:" << endl;
    cin >> n;
    while (a<n)
    {
        a++;
        S = S+(1/((2*a)+1));
        
    }
    cout << "Dap an la: " << S;
    return 0;
}
