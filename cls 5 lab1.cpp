#include <iostream>
using namespace std;

class myStack{

    int s[20];
    int top=0;
public:
    bool isEmpty(){
        if(top==0){
            return true;
    }
        else {
            return false ;
        }
    }
    bool isFull(){
        if(top==20){
            return true;
        }
        else {
            return false;
        }
    }
    bool push (int element){
        if(isFull()== true){
            return false;
        }
        else {
            s[top]= element ;
            top ++ ;
            return true;
        }
    }
    bool pop (){
        if(isEmpty()== true){
            return false;
        }
        else {
            top -- ;
            return true;
        }
    }
    void show(){
        if(isEmpty()){
            cout<<"Nothing to print!" <<endl;
        }
        else{
            for ( int i= top-1 ; i>=0 ; i--){
                cout<<s[i];
            }
        }
    }
    int getTopElement(){
        if(isEmpty()){
            return -9999999;
        }
        else {
            return s[top-1];
        }
    }

};
int main(){
    myStack m1;
    m1.push(10);
    m1.show();
    m1.getTopElement();
}

