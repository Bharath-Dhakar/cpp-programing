#include<iostream>
using namespace std ;
int main(){
int i , j ; 
cout << "Enter the number of rows and columns :: " ;
cin >> i >> j ;

for(int p =  0  ; p<i;p++  ){
    for(int q = 0 ; q <j;q++  ){
    cout<<"* ";
}
cout<< "\n" ;
}
return 0 ;
}