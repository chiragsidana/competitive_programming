#include<bits/stdc++.h>
using namespace std;
class abstractemployee{
    virtual void askforpromotion()=0;
};
class employee:abstractemployee{
    private:
    
    string company;
    int age;

    protected:
    string name;
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
  void askforpromotion(){
      if(age>30){
          cout<<name<<" got_promoted"<<endl;
      }
      else{
          cout<<name<<"  sorry no promotion"<<endl;
      }
  }
  employee(string Name, string Company, int Age){
      name=Name;
      company=Company;
      age=Age;

  }
};
class developer:public employee{
//developer is child class and employee is parent class

public:
string Favprogramminglanguage;
 developer(string Name, string Company, int Age, string favprogramminglanguage)
:employee(Name,Company,Age)
 {
     Favprogramminglanguage=favprogramminglanguage;
 }
    void FixBug(){
        cout<<name<<" fixed bug using "<<Favprogramminglanguage<<endl;
    }
};

class teacher:public employee{
    public:
string Subject;
void preparelesson(){
    cout<<name<<" is preparing "<<Subject<<" lesson"<<endl;

    
}
teacher(string Name, string Company, int Age,string subject)
:employee(Name,Company,Age)
    {
Subject=subject;
    }


};
int main(){

    employee employee1=employee("chirag","TIET",21); 
    employee employee2=employee("divyanshu","TIET",32);

   developer d=developer("chirag","TIET",25,"C++");
   teacher t=teacher("jack","TIET",35,"history");
   t.preparelesson();
   t.askforpromotion();
    return 0;
}   