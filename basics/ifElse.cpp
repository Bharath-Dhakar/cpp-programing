#include<iostream>
using namespace std ;
int main(){

cout << "enter four numbers : ";

int a ,b ,c,d ;
cin  >> a >> b >> c >> d;

if (a>b && a>c && a>d){
    cout<<"maximum number is :"<<a <<endl;   
}
else if (b>c  && b > d) { 
    cout<<"maximum number is :"<<b <<endl;   
}
else if (c>d) { 
    cout<<"maximum number is :"<<c <<endl;   
}
else{
    cout<<"maximum number is :"<<d <<endl;  
}
return 0 ;
}