#include<bits/stdc++.h>
using namespace std;

class Time{
public:
    int hour;
    int m;

    Time(int mins){
    hour=mins/60;
    m=mins%60;
    }
    void display(){
    cout<<"The time is"<<hour<<"hours and "<<m<<"mins"<<endl;
    }
    };
    int main(){
        int min_from_mid_night=330;
        //time t= min_from_mid_night;

        Time t(min_from_mid_night);
        t.display();
    return 0;
    }
