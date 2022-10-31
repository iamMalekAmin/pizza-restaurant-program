#include <iostream>

#include <string>

using namespace std;

int main()

{
   int o=0;
   float totalbill=0;
   string size,M,S,L;
   string topping,Yes,No,zyada,mushroom,onion,sausage,item;
   do{

        int extra=0,m=0;
        float cost=0,bill=0;
        cout<<"Welcome to our Pizza restaurant!!!"<<endl;
        cout<<"Please select one of items"<<endl;
        cout<<"1- SUPER SUPREME - S=50 /M=75.5/ L=100"<<endl;
        cout<<"2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99"<<endl;
        cout<<"3- MARGHERITA - S=35/ M=70/ L=95 "<<endl;
        cout<<"4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16 "<<endl;
        cout<<"5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25 "<<endl;
        cin>>m;
        switch (m)
        {
            case 1 :
            cout<<"you select SUPER SUPREME"<<endl;
            break ;

        case 2 :
            cout<<"you select CHICKEN SUPREME"<<endl;
        break ;

        case 3 :
            cout<<"you select MARGHERITA"<<endl;
        break ;

        case 4 :
            cout<<"you select CHEESE LOVERS"<<endl;
        break ;

        case 5 :
            cout<<"you select SEA FOOD LOVERS"<<endl;
        break ;

        default :

            cout<<"plz choose from mane"<<endl;

        }
        cout<<"enter your quantity"<<endl;

        cin>>o;

        if(o<1){
            cout<<"plz enter num"<<endl;
            continue;
        }
        cout<<"enter size"<<endl;

        cin>>size;
        switch (m)
        {

        case 1 :

            if(size == "S"||size == "s"){
                cost=50;
            }
            else if(size == "M"||size == "m"){
                cost=75.5;
            }
            else if(size == "L"||size == "l"){
                cost=100;
            }
            else{
                cout<<"plz choose from mane"<<endl;
            }
        break ;

        case 2 :
            if(size == "S"||size == "s"){
                cost=45;
            }
            else if(size == "M"||size == "m"){
                cost=73.88;
            }
            else if(size == "L"||size == "l"){
                cost=97.99;
            }
            else{
                cout<<"plz choose from mane"<<endl;
                continue;
            }
        break ;

        case 3 :
            if(size == "S"||size == "s"){
                cost=35;
            }
            else if(size == "M"||size == "m"){
                cost=70;
            }
            else if(size == "L"||size == "l"){
                cost=95;
            }
            else{
                cout<<"plz choose from mane"<<endl;
                continue;
            }
        break ;

        case 4 :
            if(size == "S"||size == "s"){
                cost=60.96;
            }
            else if(size == "M"||size == "m"){
                cost=87.75;
            }
            else if(size == "L"||size == "l"){
                cost=113.16;
            }
            else{
                cout<<"plz choose from mane"<<endl;
                continue;
            }
        break ;

        case 5 :
            if(size == "S"||size == "s"){
                cost=64.47;
            }
            else if(size == "M"||size == "m"){
                cost=94.30;
            }
            else if(size == "L"||size == "l"){
                cost=123.25;
            }
            else{
                cout<<"plz choose from mane"<<endl;
                continue;
            }
        break ;

        }
        cout<<"do you want extra topping"<<endl;

        cin>>topping;

        if(topping == "Yes"||topping == "yes")
            {
            cout<<"please select one( mushroom=10 ,onion=5 ,sausage=10)"<<endl;
            cin>>zyada;
            if(zyada == "mushroom"){
                extra=10;
            }
            else if(zyada == "onion"){
                extra=5;
            }
            else if(zyada == "sausage"){
                extra=10;}
            else{
                cout<<"plz choose from mane"<<endl;
                continue;}
        }
        cout<<"do you want another item"<<endl;
        cin>>item;

        bill=o*(cost+extra);
        totalbill+=bill;
    }
    while(item == "Yes"||item == "yes");
    cout<<"Thank you for using our application your bill = "<<totalbill<<endl;
    return 0;
}
