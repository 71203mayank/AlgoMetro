#include<bits/stdc++.h>
#include "functions.h"
using namespace std;

int main(){

    int exit;
    do{
        exit=showMessage();
        if(exit==1){
            showStation();
            cout<<endl;
        }
        else if(exit==2){
            int source;
            int destination;
            cout<<"\n\nEnter Source ID: ";
            cin>>source;
            cout<<"Enter Destination ID: ";
            cin>>destination;

            if(source >28 || destination >28){
                cout<<"ERROR!!\n";
            }
            else{
                dijkstra(source-1,destination-1);
            }

            cout<<"\n\n";

            
        }
        else if(exit>3){
            cout<<"ERROR, Choose form the above given option!!\n\n";
        }

    }while(exit!=3);

    return 0;

}
