#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1,n2,n3,n4,avg,s,recal;
    cin>>n1>>n2>>n3>>n4;
    avg=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    if(avg>=7.0){
        cout<<"Aluno aprovado."<<endl;
        }
     else if(avg<5.0){
        cout<<"Aluno reprovado."<<endl;
        } else  if(avg<=6.9&&avg>=5.0){
        cout<<"Aluno em exame."<<endl;
        cin>>s;
        cout<<"Nota do exame: "<<s<<endl;
        recal=(avg+s)/2;
        if(recal>=5){
        cout<<"Aluno aprovado."<<endl;
        }else if(recal<=4.9){
             cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<recal<<endl;
    }


    return 0;
}
