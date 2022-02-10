#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

  double x1,x2,y1,y2,dist,disq;
  cin>>x1>>y1>>x2>>y2;
  dist=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  disq=sqrt(dist);
  cout<<fixed<<setprecision(4)<<disq<<endl;
    return 0;
}
