#include<bits/stdc++.h>
#include "station.h"
using namespace std;

void showStation(void){
    cout<<" ID"<<"\t"<<"Stations"<<endl;
    for(int i=0;i<28;i++){
        cout<<sort_station[i]<<endl;
    }
}

int showMessage(void){
    cout<<"Press <1> to show list of station\n";
    cout<<"Press <2> to search best route b/w stations\n";
    cout<<"Press <3> to exit\n";
    int x ;
    cout<<"Enter from the option above: ";
    cin>>x;
    return x;
}

int NO_PARENT = -1;

void printPath(int currIndx, vector<int> parents, vector<string>& stationArr){
    if(currIndx==NO_PARENT){
        return;
    }
    printPath(parents[currIndx],parents,stationArr);
    stationArr.push_back(str[currIndx]);

}

int getID(string str_station){
    for(int i=0;i<28;i++){
        if(str_station==str[i]){
            return i;
        }
    }
    return -1;
}

void printCommonLine(string st1, string st2){
    int i1=getID(st1);
    int i2=getID(st2);
    
    for(int j=0;j<line[i1].length();j++){
        for(int k=0;k<line[i2].length();k++){
            if(line[i1][j]==line[i2][k]){
                if(line[i1][j]=='B'){
                    cout<<"-("<<"Blue"<<")-> ";
                }
                else if(line[i1][j]=='Y'){
                    cout<<"-("<<"Yellow"<<")-> ";
                }
                else if(line[i1][j]=='G'){
                    cout<<"-("<<"Green"<<")-> ";
                }
                else if(line[i1][j]=='P'){
                    cout<<"-("<<"Pink"<<")-> ";
                }
                else if(line[i1][j]=='R'){
                    cout<<"-("<<"Red"<<")-> ";
                }
                else if(line[i1][j]=='V'){
                    cout<<"-("<<"Purple"<<")-> ";
                }
                else if(line[i1][j]=='D'){   
                    cout<<"-("<<"Violet"<<")-> ";
                }
                else{
                    cout<<"-("<<"Orange"<<")-> ";
                }

                break;

            }
        }
    }
    
}

void printStation(int source, int destination, vector<int> distances, vector<int> parents){
    cout<<"Total diatance:   "<<distances[destination]<<" km\n";
    cout<<"path: ";
    vector<string> stationArr;
    printPath(destination,parents, stationArr);
    for(int i =0;i<stationArr.size();i++){
        cout<<stationArr[i]<<" ";
        if(i!=stationArr.size()-1){
            printCommonLine(stationArr[i],stationArr[i+1]);
        }
    }
    cout<<endl;
}

void dijkstra(int source, int destination){
    int n = 28; //size of the mat
    vector<int> shortestDistances(28,100);

    vector<bool> added(28,0);

    shortestDistances[source]=0;

    vector<int> parents(28);
    parents[source] = NO_PARENT;

    for(int i=0;i<28;i++){
        int nearestVertex = -1;
        int shortestDistance = INT_MAX;
        for(int vertexIndex = 0; vertexIndex<28;vertexIndex++){
            if(!added[vertexIndex] && shortestDistances[vertexIndex]<shortestDistance){
                nearestVertex = vertexIndex;
                shortestDistance = shortestDistances[vertexIndex];
            }
        }

        added[nearestVertex]=true;

        for(int vertexIndex=0;vertexIndex<28;vertexIndex++){
            int edgeDistance = mat[nearestVertex][vertexIndex];

            if(edgeDistance>0 && ((shortestDistance + edgeDistance)< shortestDistances[vertexIndex])){
                parents[vertexIndex] = nearestVertex;
                shortestDistances[vertexIndex]=shortestDistance+edgeDistance;
            }
        }
    }

    
    printStation(source, destination ,shortestDistances, parents);

}
