/*Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n*/
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
        S = S+(1/(2*a));
        
    }
    cout << "Dap an la: " << S;
    return 0;
}
