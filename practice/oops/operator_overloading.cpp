#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int real,imag;
public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r,int i){
        real=r;
        imag=i;
    }

    void print(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    //operator overloading
    Complex operator +(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};
int main(){
    Complex c1(5,4);
    Complex c2(2,5);
    Complex c3(1,1);
    Complex c4;
   // c3=c1+c2 //c3= c1.add(c2)
    c4=c1+c2+c3; 
    c4.print();

    // int x=5;
    // int y=4;
    // int z= x+y;
    // cout<<"z value: "<<z<<endl;
    return 0;
}