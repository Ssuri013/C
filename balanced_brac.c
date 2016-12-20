#include <stack>
#include <string>
#include <vector>
#include <iostream>


using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

    stack <int>x;

    for(int i=0; i<s.size(); i++){
        int temp = s[i];
        x.push(temp);
    }

    int temp,temp2;
    stack <int>y;

    y.push(x.top());
    x.pop();

    while(x.size()!=0){

        if(y.size()==0){
            y.push(x.top());
            x.pop();
            if(x.size()==0){
                break;
            }

        }
    int flag=0;
    temp = x.top();
    temp2 = y.top();

    if(temp==91 && temp2==93)
    flag=1;
    if(temp==123 && temp2==125)
    flag=1;
    if(temp==40 && temp2==41)
    flag=1;

    if(flag==1){
      x.pop();
      y.pop();

    }
    else{
    x.pop();
    y.push(temp);
    }


    }

    if(y.size() == 0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl ;
    }

    }
    return 0;
}
