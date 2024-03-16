#include<iostream>
using namespace std ;
int main(){


int i = 3 ;
int j =  6; //5
int k =9 ;  //10

int l =  i++ + --i  - j--  + k++ - --j + k++ ;  //  15

cout  << "The value of l is :"<< l << endl ;
return 0 ;
}