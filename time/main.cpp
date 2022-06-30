//
//  main.cpp
//  time
//
//  Created by James Lee on 2022/6/30.
//

#include <iostream>

using namespace std;

class Time1{
    public:
        int hour;
        int min;
        int sec;
} time1;

class Time2{
    public:
        int hour;
        int min;
        int sec;
} time2;

int main(int argc, const char * argv[]) {
    cout << "input the time1 : " << endl;
    cout << "hour : ";
    cin >> time1.hour;
    while (time1.hour > 24){
        cout << "You input invalid hour, please input again" << endl;
        cout << "hour : ";
        cin >> time1.hour;
    }
    cout << "min : ";
    cin >> time1.min;
    while (time1.min > 60){
        cout << "You input invalid min, please input again" << endl;
        cout << "min : ";
        cin >> time1.min;
    }
    cout << "sec : ";
    cin >> time1.sec;
    while (time1.sec > 60){
        cout << "You input invalid sec, please input again" << endl;
        cout << "sec : ";
        cin >> time1.sec;
    }
    cout << "input the time2 : " << endl;
    cout << "hour : ";
    cin >> time2.hour;
    while (time2.hour > 24){
        cout << "You input invalid hour, please input again" << endl;
        cout << "hour : ";
        cin >> time1.hour;
    }
    cout << "min : ";
    cin >> time2.min;
    while (time2.min > 60){
        cout << "You input invalid min, please input again" << endl;
        cout << "min : ";
        cin >> time1.min;
    }
    cout << "sec : ";
    cin >> time2.sec;
    while (time2.sec > 60){
        cout << "You input invalid sec, please input again" << endl;
        cout << "sec : ";
        cin >> time1.sec;
    }
    
    int a, b, c;
    
    if(time1.hour >= time2.hour){
        if (time1.sec >= time2.sec){
            c = time1.sec - time2.sec;
        }else{
            time1.min-=1;
            time1.sec+=60;
            c = time1.sec - time2.sec;
        }
        if (time1.min >= time2.min){
            b = time1.min - time2.min;
        }else{
            time1.hour-=1;
            time1.min+=60;
            b = time1.min - time2.min;
        }
        a = time1.hour - time2.hour;
    }else{
        if (time2.sec >= time1.sec){
            c = time2.sec - time1.sec;
        }else{
            time2.min-=1;
            time2.sec+=60;
            c = time2.sec - time1.sec;
        }
        if (time2.min >= time1.min){
            b = time2.min - time1.min;
        }else{
            time2.hour-=1;
            time2.min+=60;
            b = time2.min - time1.min;
        }
        a = (time2.hour+24) - time1.hour;
    }
    cout << "The time difference is : "<< a << " hour " << b << " min " << c << " sec " << endl;
    
    
    
    
    return 0;
}
