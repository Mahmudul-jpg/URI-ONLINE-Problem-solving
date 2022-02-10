#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double X,Y;
cin>>X>>Y;
if(X == 1){
  Y *= 4.0;
 }else if(X == 2){
  Y *= 4.5;
 }else if(X == 3){
  Y *= 5.0;
 }else if(X == 4){
  Y *= 2.0;
 }else{
  Y *= 1.5;
 }

cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y<<endl;

    return 0;
}
