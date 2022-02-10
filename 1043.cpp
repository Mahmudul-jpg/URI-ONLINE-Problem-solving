#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   float A,B,C,perimeter,area;
   cin>>A>>B>>C;
   if((A+B>C)&&(A+C>B)&&(B+C>A)){
    perimeter=A+B+C;
    cout<<"Perimetro = "<<fixed<<setprecision(1)<<perimeter<<endl;
   }else{
       area=((A+B)/2)*C;
    cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
   }

    return 0;
}
