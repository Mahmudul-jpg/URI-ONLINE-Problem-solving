#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int time,speed;
   float liters;
    cin>>time>>speed;
    liters=((time*speed)/12.0);
    cout<<fixed<<setprecision(3)<<liters<<endl;



    return 0;
}
