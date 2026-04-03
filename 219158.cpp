//E. Area of a Circle
push
#include<bits/stdc++.h>
using namespace std;

int main(){
    double R;
    cin >> R;

    double area = (R*R)*3.141592653;
 
    cout<<  fixed << setprecision(9)  <<area << endl;
 
    return 0;
    
}