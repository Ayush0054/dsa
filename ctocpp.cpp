#include<iostream>
#include<stdlib.h>
    using namespace std;
    
//         int n;
//         cout<<"enter n"<<endl;
//         cin>>n;
// int marks[n];
// for(int i=0;i<n;i++){
//     cout<<"enter the marks of"<<i<<"th student"<<endl;
//     cin>>marks[i];
// }
// for(int i=0;i<n;i++){
//     cout<<"marks of "<<i<<"th student is"<<marks[i]<<endl;
// }


// int arr2d[3][3]={{1,2,3},{4,5,6}};
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<"the value of" <<i<<" ,"<<j<<" "<<arr2d[i][j]<<endl;
//     }
// }

// int a=34; // pointers
// int * ptra;
// ptra = &a;
// cout<<*ptra;

// classes and object
class employe{
    public:
    string name;
    int salary;
    employe(string name,int salary, int sp)
    {
        this->name= name;
        this->salary = salary;
        this->secretpassword =sp;
    }
    void printdetails(){
         cout<<"the nME OF OUR FIRST EMPLOYE IS "<< this->name<< " and his salary" <<this->salary<<endl;
    }
    private:
    int secretpassword;
};
 int main(){
  employe har("harry", 100, 3424);
  har.printdetails();
 cout<<har.secretpassword; 
}