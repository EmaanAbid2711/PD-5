#include<iostream>
using namespace std;
    void ProjectTimeCalculation();
    float hrs, days, workers, workDone, hrsleft, neededhrs;
main(){

    cout<<"Enter the needed hours: ";
    cin>>hrs;
    cout<<"Enter the days that the firm have: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    ProjectTimeCalculation();
}
void ProjectTimeCalculation(){
    workDone = ((days*0.9)*10)*workers;
    neededhrs  = hrs - workDone;
    hrsleft = workDone - hrs;

    if(hrs>workDone){
        cout<<"Not enought time! "<<neededhrs<<" hours needed.";
    }
    if(hrs<workDone){
        cout<<"Yes!"<<hrsleft<<" hours left.";
    }
}