#include<bits/stdc++.h>
using namespace std;
class abstractemployee{
    virtual void askforpromotion()=0;
};
class employee:abstractemployee{
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
int main(){

    employee employee1=employee("chirag","TIET",21); 
    employee employee2=employee("divyanshu","TIET",32);

     employee1.askforpromotion();
     employee2.askforpromotion();
    return 0;
}   