#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float epsilon;
    float x1;
    double x_end;
    bool is_extremum=1;
    cout<<"epsilon:";
    cin>>epsilon;
    //f(x) = x^2+5x+2
    //choose small epsilon (10^-5) or even less
    cout<<"Enter the first x:";
    cin>>x1;
    cout<<"Enter the last x:";
    cin>> x_end;
    for(x1;x1<=x_end;x1+=epsilon){
        if(x1+epsilon == x1 - epsilon*(2*x1+5)){
            cout<<"Extremum exists:"<<endl<<"x = "<<x1+1<<endl<<"y =" <<pow(x1+1,2)+5*(x1+1) +2;
            break;
        }else is_extremum = 0;
    }
    if(is_extremum==0) cout<<"The extremum doesn't exist";
}
