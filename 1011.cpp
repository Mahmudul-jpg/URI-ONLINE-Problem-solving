#include <iostream>
#include <iomanip>
using namespace std;

int main() {


   double R,pi=3.14159,vol;
   cin>>R;
   vol=(4.0/3)*pi*(R*R*R);
   cout<<"VOLUME = "<<fixed<<setprecision(3)<<vol<<endl;

    return 0;
}
