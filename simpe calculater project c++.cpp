#include<iostream>

using namespace std;

 main()
{


int num1, num2;
char x;
while(true)
{

cout<<"\tsimple calculater\n\n";

cout<<"\tenter the frist number\n\t";
cin>>num1;

cout<<"\tenter the second number\n\t";
cin>>num2;

cout<<"\t\npress A for adddition\n" <<endl;

cout<<"\t\npress B for subtraction\n" <<endl;

cout<<"\t\npress C for multiplcation\n" <<endl;

cout<<"\t\npress D for division\n" <<endl;
cin>>x;

    if(x=='a')
    cout<<"\tthe sum="<<num1 + num2 <<endl;
    
     else if(x=='b')
    cout<<"\tthe sub="<<num1 - num2 <<endl;
    
     else if(x=='c')
    cout<<"\tthe mul="<<num1 * num2 <<endl;
    
     else if(x=='d')
    cout<<"\tthe div="<<num1 % num2 <<endl;
    
     else 
     cout<<"\tinvaid option press";
 }
 }
