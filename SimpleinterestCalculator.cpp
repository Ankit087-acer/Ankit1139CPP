#include <iostream>
using namespace std;
class SimpleInterest{
 public:
 int principal;
 float rate;
 float time;
 int InterestCalculator(int p,float r,float t){
    float interset=(p*r*t)/100;
    cout<<"Interest: "<<interset<<endl;
 }
};
int main(){
    SimpleInterest I;
    cin>>I.principal>>I.rate>>I.time;
    I.InterestCalculator(I.principal,I.rate,I.rate);
    return 0;
}