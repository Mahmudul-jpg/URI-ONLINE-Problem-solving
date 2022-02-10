#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&a<c)
    {
        if(b<c){
            cout<<a<<"\n"<<b<<"\n"<<c<<endl;
        }else
        {
        cout<<a<<"\n"<<c<<"\n"<<b<<endl;
        }
    }
    if(b<a&&b<c)
    {
        if(a<c)
            {cout<<b<<"\n"<<a<<"\n"<<c<<endl;
            }
        else {cout<<b<<"\n"<<c<<"\n"<<a<<endl;}
    }
    if(c<b&&c<a)
    {
        if(b<a)
            {cout<<c<<"\n"<<b<<"\n"<<a<<endl;}
        else {cout<<c<<"\n"<<a<<"\n"<<b<<endl;};
    }
    cout<<"\n";
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;
    return 0;
}
