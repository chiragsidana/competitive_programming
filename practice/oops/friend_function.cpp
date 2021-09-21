#include<bits/stdc++.h>
using namespace std;
class Distance{
private:
    int meters;
public:
    Distance(){
        meters=0;
    }
    void displayData(){
        cout<<"Meters value: "<<meters<<endl;
    }
    //prototype or signature
    friend void addvalue(Distance &d);
};
void addvalue(Distance &d){
    d.meters=d.meters+5;
}

int main(){
    Distance d1; //meters=0
    d1.displayData(); //0


    // the friend function call
    addvalue(d1); //pass by reference

    d1.displayData(); //5
    return 0;
}