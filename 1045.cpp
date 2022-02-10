#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double A,B,C;
    cin>>A>>B>>C;
    if ( A+B>=C ){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(A*A = B*B + C*C){
         cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(A*A > B*B + C*C){
          cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(A*A < B*B + C*C){
           cout<<"TRIANGULO ACUTANGULO"<<endl;
    }else if(A==B==C){
    cout<<"TRIANGULO EQUILATERO"<<endl;
    }else if(A == B || A == C || B == C){
     cout<<"TRIANGULO ISOSCELES"<<endl;
    }

    return 0;
}
