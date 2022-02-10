#include <iostream>
#include <iomanip>
using namespace std;

int main() {
float tax;
cin>>tax;
if(tax>=0.00&&tax<=2000.00){
   cout<<"Isento"<<endl;
}else if(tax>=2000.01&&tax<=3000.00){
    tax = ((tax - 2000.00)*8)/100;
    cout<<fixed<<setprecision(2)<<tax<<endl;
} else if(tax>=3000.01&&tax<=4500.00){
    tax = ((tax - 2000.00)*18)/100;
    cout<<fixed<<setprecision(2)<<tax<<endl;
} else if(tax>4500.00){
     tax = ((tax - 2000.00)*28)/100;
     cout<<fixed<<setprecision(2)<<tax<<endl;
}
    return 0;
}
