#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int code_product1, code_product2, num_product1, num_product2;
    float price_product1, price_product2, paid;
    cin>>code_product1>>num_product1>>price_product1;
    cin>>code_product2>>num_product2>>price_product2;
    paid= (num_product1 * price_product1) + (num_product2 * price_product2);

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<paid<<endl;
 return 0;
}
