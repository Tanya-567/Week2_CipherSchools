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
    student(){
    }
void intro()
{
    cout<<"My name is "<<name<<" , my id is "<<id <<" , passcode is "<<passcode<<endl;
}
void setPass(string s,int a)
{
    passcode=s;
    age=a;
}
student(int i,string n,string p,int a){
name=n;
id=i;
passcode=p;
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

student s1(1,"Tanya","0001",10);
//student s2;
//s2=s1;
//s2.intro();
//s1.setPass("0001",10);
int a=10;
int*ptri=&a;

student*ptrs=&s1;
cout<<ptrs->name<<endl;
//bestFriend bff;
//bff.sharingSecret(s1);
//hacker(s1);
return 0;
}
