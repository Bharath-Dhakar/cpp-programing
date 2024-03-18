
#include<iostream>
using namespace std ;

int main(){

int n ; 

cout << "Enter a number : "<< endl;
cin >> n ;

for( int j = 2  ;  j<=n ;j++){
    bool isPrime =  true ;

    for(int i = 2 ; i < j/2 ; i++){
if(j%i == 0){
 isPrime = false ;
 break ;
}

}

if(isPrime){
cout<< j<<" ";
}

}





}