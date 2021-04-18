#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
string name;
string company;
int age;

void introduceyourself(){
    cout<<"Name- "<<name<<endl;
    cout<<"Company- "<<company<<endl;
    cout<<"Age- "<<age<<endl;

}
  
  employee(string Name, string Company, int Age){
      name=Name;
      company=Company;
      age=Age;

  }
};
int main(){

    employee employee1=employee("chirag","TIET",21);
    // employee1.name="Chirag";
    // employee1.company="TIET";
    // employee1.age=21;
    employee1.introduceyourself();

    employee employee2=employee("divyanshu","TIET",22);
    // employee2.name="Divyanshu";
    // employee2.company="TIET";
    // employee2.age=22;
    employee2.introduceyourself();
    return 0;
}