#include <iostream>

using namespace std;

int main() {
  int age,years,months,days;
  cin>>age;
  years= age/365;
  months=(age%365)/30;
  days=(age%365)%30;
  cout<<years<<" ano(s)"<<endl;
  cout<<months<<" mes(es)"<<endl;
  cout<<days<<" dia(s)"<<endl;

    return 0;
}
