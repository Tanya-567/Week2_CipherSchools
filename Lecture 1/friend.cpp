#include<bits/stdc++.h>
using namespace std;
class student{

    string passcode;
friend class bestFriend;
protected:
    int age;
public:
    string name;
    int id;
void intro()
{
    cout<<"My name is "<<name<<" , my id is "<<id <<" , passcode is "<<passcode<<endl;
}
void setPass(string s,int a)
{
    passcode=s;
    age=a;
}
friend void hacker(student s);
};
void hacker(student s){
cout<<s.passcode<<" "<<s.age<<endl;
}
class bestFriend{
public:
    void sharingSecret(student s)
    {
    cout<<s.passcode<<" "<<s.age<<endl;
    }
};
int main(){

student s1;
s1.setPass("0001",10);

bestFriend bff;
//bff.sharingSecret(s1);
hacker(s1);
return 0;
}
