#include<iostream>
using namespace std ;
int main(){

// 1 byte =  8 bit
// primetive data type 

char  a = 'A' ;     // char size 1 bytes
int b = 20 ;    // int size 4  bytes  
float c = 35.7f;  //  float size 4 bytes
 double d = 69.99 ;     // double size 8 bytes
bool e = true ;       // bool size 1 byte

cout << "Size of char :"<< sizeof(a) << endl ;
cout << "Size of int :"<< sizeof(b)<< endl ;
cout << "Size of float :"<< sizeof(c)<< endl ;
cout << "Size of double :"<<  sizeof(d)<< endl ;
cout <<"Size of bool :"<< sizeof(e)<<endl ;

// type modifiers   =  long  = 4 bytes  , short  = 2 , bytes , signed unsigned  = 4 bytes

return 0 ;
}