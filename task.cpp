#include<iostream>
using namespace std;
int main(){
   int birthday = 0;
   char set1, set2, set3, set4, set5;
   cout<<" hey! this is a random game to guess your birthday date."<<endl;
   cout<<" choose your birthday from the following sets. "<<endl;
   cout<<"set1: 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 "<<endl;
   cout<<"set2: 2 3 6 7 10 11 14 15 18 19 22 23 26 27 30 31 "<<endl;
   cout<<"set3: 4 5 6 7 12 13 14 15 20 21 22 23 28 29 30 31 "<<endl;
   cout<<"set4: 8 9 10 11 12 13 14 15 24 25 26 27 28 29 30 31 "<<endl;
   cout<<" set5: 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31"<<endl;
   
   cout<<" is your bithday in the first set1??    Y/N"<<endl;
   cin>>set1;
   if (set1=='Y')
   {
    birthday +=1;
   }
   cout<<" is your birthday in the set2??    Y/N"<<endl;
   cin>>set2;
   if (set2=='Y')
   {
    birthday += 2;
   }
   cout<<" is your birthday in set3??   Y/N"<<endl;
   cin>>set3;
   if (set3=='Y')
   {
    birthday += 4;
   }
   cout<<" is your birthday in the set4??    Y/N"<<endl;
   cin>>set4;
   if (set4=='Y')
   {
    birthday += 8;
   }
   cout<<" is your birthday in set5??"<<endl;
   cin>>set5;
   if (set5=='Y')
   {
    birthday += 16;
   }
   cout<<"your birthday is : "<<birthday;
return 0;
}