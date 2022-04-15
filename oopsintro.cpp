#include <iostream>
using namespace std;

class num{

};
class complex{
    public:
    int realpart;
    int imgpart;

    complex(int realpart , int imgpart){
        // cout << "inside constructor" << endl;
        this->realpart = realpart;
        this->imgpart = imgpart;
    }

    ~complex(){
        cout << "destructor called" << endl;
    }

    void display(){
        cout<< realpart << " + " << imgpart << "i" << endl;
    }

};
 
int main(){

    cout << sizeof(num) << endl;

    complex a(2,3);
    // a.realpart = 1;
    // a.imgpart = 2;
    a.display();

    cout << a.realpart << endl;
    cout << a.imgpart << endl;

    // using pointers
    complex* num = new complex(5,2);

    // (*num).realpart = 2;
    // (*num).imgpart = 3;

    (num)->realpart = 2;
    (num)->imgpart = 3;

    cout << a.realpart << endl;
    cout << a.imgpart << endl;


    delete num;



    


    return 0;
}