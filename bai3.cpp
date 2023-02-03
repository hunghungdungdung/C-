/*Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a=0;
    float n;
    float S=0;
    cout << "Nhap so muon duoc chia boi 1 tu 1 den:" << endl;
    cin >> n;
    while (a<n)
    {
        a++;
        S = S+(1/a);
        
    }
    cout << "Dap an la: " << S;
    return 0;
}
