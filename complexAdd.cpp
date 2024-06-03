#include<iostream>
using namespace std;
class Complex{
    int real,imgnry;
    public:
    /*
        void setData(int p,int q){
        real=p;
        imgnry=q;
    }*/
    Complex(int p,int q){
        real=p;
        imgnry=q;
    }
    Complex(){

    }
    //Complex Add(Complex h1){
        Complex operator +(Complex h1){
        Complex c5;
        c5.real=real+h1.real;
        c5.imgnry=imgnry+h1.imgnry;
        return c5;
    }
    void displayData(){
        cout<<real<<" + "<<imgnry<<"i"<<endl;
    }
};
int main(){
   /*   Complex c1;
        c1.setData(11,22);
        c1.displayData();
    */
    Complex c2(1,2);
    Complex c3(11,4);
    Complex c4;
    cout<<"First Complex Number:"<<endl;
    c2.displayData();
    cout<<"Second Complex Number:"<<endl;
    c3.displayData();
    cout<<"Addition Of Both Complex Number:"<<endl;
   // c4=c2.Add(c3);
   //Also Use this.......
    c4=c2+c3; 
    //MEANS THAT  >>>>>>  c2 calls his + function and c3 passes as a argument and returning result si stored in c4
    c4.displayData();

    return 0;
}