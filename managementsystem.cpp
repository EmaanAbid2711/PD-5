#include<iostream>
using namespace std;

void Header();
int menu();
void one();
void seven();
void two();
void three();
void four();
void five();
void six();

main(){
    int option;
    Header();
    option = menu();
    if(option == 1){
        one();
    }
    if(option == 2){
        two();
    }
        if(option == 3){
        three();
    }
        if(option == 4){
        four();
    }
        if(option == 5){
        five();
    }
        if(option == 6){
        six();
    }
    if(option == 7){
        seven();
    }
        if(option == 8){
      
    }


}

void Header(){
    cout<< "    **************************************************************************************************************************************************"<<endl;
    cout<< "    *     #########     ########   #########    #####    ###       ##              #########   ########               #####    ######   ##########   *"<<endl;      
    cout<< "    *    ###     ###   ##      ##  ##          ##   ##   ## ##     ##             ###     ###  ##                    ##   ##   ##    ##     ##       *"<<endl;     
    cout<< "    *    ###     ###   ##          ##         ##     ##  ##  ##    ##             ###     ###  ##                   ##     ##  ##    ##     ##       *"<<endl;
    cout<< "    *    ###     ###   ##          #########  #########  ##   ##   ##             ###     ###  ########             #########  #######      ##       *"<<endl;
    cout<< "    *    ###     ###   ##          ##         ##     ##  ##    ##  ##             ###     ###  ##                   ##     ##  ##   ##      ##       *"<<endl;
    cout<< "    *    ###     ###   ##      ##  ##         ##     ##  ##     ## ##             ###     ###  ##                   ##     ##  ##    ##     ##       *"<<endl;
    cout<< "    *     #########     ########   #########  ##     ##  ##       ###              #########   ##                   ##     ##  ##     ##    ##       *"<<endl;
    cout<< "    **************************************************************************************************************************************************"<<endl;
}
int menu(){
    int option;
    cout<<"Press 1 for New Member Registration..."<<endl;
    cout<<"Press 2 to view available portraits..."<<endl;
    cout<<"Press 3 to view available paintings..."<<endl;
    cout<<"Press 4 for customize portraits..."<<endl;
    cout<<"Press 5 for customize paintings..."<<endl;
    cout<<"Press 6 for accessories..."<<endl;
    cout<<"Press 7 for billing and payment..."<<endl;
    cout<<"Press 8 to exit..."<<endl;
    cout<<"Press the required number to continue...";
    cin>>option;
    return option;
}
void one(){
        string name;
        float age, num;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter your phone number: ";
        cin>>num; 
        }
void seven(){
    float total1, total2, price1, price2, total;
    cout<<"Total no.of selected portraits: ";
    cin>>total1;
    cout<<"Price of each: ";
    cin>>price1;
    cout<<"Total no.of selected accessories: ";
    cin>>total2;
    cout<<"Price of each: ";
    cin>>price2;
    total = (total1*price1)+(total2*price2);
    cout<<"Your bill is: Rs"<<total;
}
void two(){
    string type2;
    cout<<"Enter the type: ";
    cin>>type2;
}
void three(){
    string type3;
    cout<<"Enter the type: ";
    cin>>type3;
}
void four(){
    string type4;
    cout<<"Enter the type: ";
    cin>>type4;
}
void five(){
    string type5;
    cout<<"Enter the type: ";
    cin>>type5;
}
void six(){
    string type6;
    cout<<"Enter the type: ";
    cin>>type6;
}