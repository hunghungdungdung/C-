/*Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a=0;
    int n;
    int S=0;
    cout << "Nhap so muon cong va mu hai tu 1 den:" << endl;
    cin >> n;
    while (a<n)
    {
        a++;
        S = S+(a*a);
        
    }
    cout << "Dap an la" << S;
    return 0;
}
