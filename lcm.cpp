#include <iostream>

using namespace std;

int main(){
    unsigned int a, b, t, result;
    int c;
    cin>>c;
    for(int i=0; i<c; i++){
        cin>>a>>b;
        result=a*b;
        while(b){
            t=b;
            b=a%b;
            a=t;
        }
        result/=a;
        cout<<result<<endl;
    }
    
    return 0;
}