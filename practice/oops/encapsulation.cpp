#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    string name;
    string company;
    int age;

    public:
    void setName(string Name){
        name=Name;
    }
    string getName(){
        return name;
    }
    void setCompany(string Company){
        company=Company;
    }
    string getCompany(){
        return company;
    }
    void setAge(int Age){
        if(Age>=18){
        age=Age;
        }
    }
    int getAge(){
        return age;
    }

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
    employee1.introduceyourself();

    employee employee2=employee("divyanshu","TIET",22); 
    employee2.introduceyourself();

    employee1.setAge(17);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;
    return 0;
}   