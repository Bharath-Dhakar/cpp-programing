#include<iostream>
using namespace std ;
int main(){

int n ;
int  remain ;
int sum =0 ;

cout << "enter a number ::" ;
cin >> n ;
int ori = n;
while(n>0){     
                
remain = n%10 ;
sum =  sum + remain*remain*remain ;  // armstrong 
n = n/10 ;                           // palindrome :: revnum = revnum*10 + remain  :: reverse

}


if(ori == sum){
    cout << "yes" ;
}else{
    cout << "no" ;
}




return 0 ;
}