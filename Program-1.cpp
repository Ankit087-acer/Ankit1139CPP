#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<"O"<<endl;
    }
    else if(marks>=70 && marks<80){
        cout<<"A+"<<endl;
    }
    else if(marks>=60 && marks<70){
        cout<<"A"<<endl;
    }
    else if(marks>=50 && marks<60){
        cout<<"B+"<<endl;
    }
    else if(marks>40 && marks<50){
        cout<<"B"<<endl;
    }
    else if(marks==40){
        cout<<"P"<<endl;
    }
    else if(marks>=0 && marks<40){
        cout<<"F"<<endl;
    }
    else{
        cout<<"P"<<endl;
    }
    return 0;
}
