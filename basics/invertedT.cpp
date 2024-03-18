#include<iostream>
using namespace std ;
int main(){
int i , j ; 
cout << "Enter the number of rows and columns :: " ;
cin >> i >> j ;

for(int p =  1  ; p<=i;p++  ){
    for(int q = 1 ; q <= j; q++  ){
       cout<<"* ";
   
}
j-- ;
cout<< "\n" ;
}
return 0 ;
}