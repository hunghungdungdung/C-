#include <iostream>

using namespace std;

int main()
{
   double n ,sum = 0 ;
for( n = 1 ; n <= 50 ; n++){
   sum += n/(n+1) ;
}
   cout << sum;
    return 0;
}
