#include <iostream>
#include <math.h>
using namespace std;

int main() {
 int a,b,s,c,major,maxe;
 cin>>a>>b>>c;
 major=((a + b + abs(a - b)) / 2);
 maxe=(major+c+abs(major-c))/2;
 cout<<maxe<<" eh o maior"<<endl;


    return 0;
}
