#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float n,per ,sal,neu;
     cin>>n;
   if(n<=400.00){
    per=15;
    sal=(per/100)*n;
    neu=n+sal;
   }else if(n>=400.01&&n<=800.00){
   per=12;
    sal=(per/100)*n;
    neu=n+sal;
   }else if(n>=800.01&&n<=1200.00){
    per=10;
    sal=(per/100)*n;
    neu=n+sal;
}else if(n>=1200.01&&n<=2000.00){
    per=7;
    sal=(per/100)*n;
    neu=n+sal;
} else{
   per=4;
   sal=(per/100)*n;
    neu=n+sal;
   }

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<neu<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sal<<endl;
    cout<<"Em percentual: "<<fixed<<setprecision(0)<<per<<" %"<<endl;
    return 0;
}
