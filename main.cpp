#include <iostream>
#include <fstream>
using namespace std;

int main()
{
string name;
int id;
int grade;
cout<<"enter a name "<<endl;
getline(cin,name);

cout<<"enter a id "<<endl;
cin>>id;

cout<<"enter a grade "<<endl;
cin>>grade;

 ofstream file ("task1.txt");

 if( !file.is_open())
 {

    cout<<" error file "<<endl;
 }
   else
   {


file<<" name "<<name<<endl;
file<<" id "<<id<<endl;
file<<" grade "<<grade<<endl;


       cout<<" good "<<endl;
       file<<" thank you ";

       file.close();
   }


















    return 0;
}
