/*Bài 1: Tính S(n) = 1 + 2 + 3 + … + n*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a=0;
    int n;
    int S=0;
    cout << "Nhap so muon cong tu 1 den:" << endl;
    cin >> n;
    while (a<n)
    {
        a++;
        S = S+a;
        
    }
    cout << "Dap an la" << S;
    return 0;
}