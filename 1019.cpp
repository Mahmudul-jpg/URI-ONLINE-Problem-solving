#include <iostream>

using namespace std;

int main() {
 int N,hr,m,sec;
 cin>>N;
 hr = (N/3600);

	m = (N -(3600*hr))/60;

	sec = (N -(3600*hr)-(m*60));


 cout<<hr<<":"<<m<<":"<<sec<<endl;


    return 0;
}
