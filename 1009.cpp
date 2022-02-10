#include<iostream>
#include <iomanip>
using namespace std;
int main(){
 char name[20];
 double salary,sell,total_salary;
 cin.getline(name, 20);
 cin>>salary;
 cin>>sell;
 total_salary = salary + (sell * 15 / 100);

 cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total_salary<<endl;
   return 0;
}
