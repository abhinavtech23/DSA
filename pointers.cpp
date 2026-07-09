#include<iostream>
using namespace std ;

int main (){

int num = 56;
 cout << "address of num in the memory is "<< &num << endl;

 int *p = &num;

 cout << "address of num stored in p " << p <<endl;

cout << "value stored in the address that is stored at p " << *p <<endl;



}