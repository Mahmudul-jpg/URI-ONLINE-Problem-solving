#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double A,B,C,TRIAN,CIR,TRAP,SQA,REC;
  cin>>A>>B>>C;
  TRIAN=0.5*A*C;
  CIR= 3.14159 * (C*C);
  TRAP =0.5*(A+B)*C;
  SQA=B*B;
  REC=A = A * B;
  cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<TRIAN<<endl;
  cout<<"CIRCULO: "<<fixed<<setprecision(3)<<CIR<<endl;
  cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<TRAP<<endl;
  cout<<"QUADRADO: "<<fixed<<setprecision(3)<<SQA<<endl;
  cout<<"RETANGULO: "<<fixed<<setprecision(3)<<REC<<endl;


    return 0;
}
