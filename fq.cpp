#include <iostream>
using namespace std;

int fq[100];
int main(){
    int n, x[100], min, max, i;
    cout<<"Enter number of observations: ";
    cin>>n;
    cout<<"Enter the observations:\n";
    cin>>x[1];
    max=x[1];
    min=x[1];
    for(i=2; i<=n; ++i){
        cin>>x[i];
        if(min>x[i])min=x[i];
        if(max<x[i])max=x[i];
    }
    int range=(max-min);
    int classes;
    cout<<"Enter number of classes: ";
    cin>>classes;
    int width=(max-min+1)/classes;
    int ll=min, lowerLimit[100], j=2;
    lowerLimit[1]=min;
    while(ll<=max){
        ll+=width;
        lowerLimit[j++]=ll;
    }
    int tc=j-1;
    //cout<<"Lower limits:\n";
    //for(j=1; j<=tc; j++)cout<<lowerLimit[j]<<" ";
    //cout<<endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=tc+1; j++){
            if(x[i]>=lowerLimit[j] && x[i]<lowerLimit[j+1]){
                fq[j]++;
                break;
            }
        }
    }
    cout<<"\n\t--------------RESULTS------------\nClass#\tLower Limit\tUpper Limit\tFrequency count\n";
    for(j=1; j<tc; j++){
        cout<<j<<"\t\t"<<lowerLimit[j]<<"\t\t"<<lowerLimit[j+1]<<"\t\t"<<fq[j]<<"\n";

    }
    return 0;
}
