#include<iostream>
using namespace std ;
int main(){

cout<< "enter a number  :";
int n ; 
cin >>n ;
char ch = 'A';

for(int i = 1 ; i<=n ;i++  ){
    
    for(int j = 1 ; j<=i ;j++){
     cout<<ch;    // j colom repet      // i row repet  
    }
   
    ch++;
    cout << endl;
}
return 0 ;
}


