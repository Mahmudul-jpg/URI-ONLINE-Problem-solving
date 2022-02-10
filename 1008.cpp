#include<iostream>
#include <iomanip>
using namespace std;
int main(){
   int num, workingHours;
   float sal;
   cin>>num>>workingHours>>sal;
   sal=workingHours*sal;
   cout<<"NUMBER = "<<num<<endl;
   cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<sal<<endl;
   return 0;
}
