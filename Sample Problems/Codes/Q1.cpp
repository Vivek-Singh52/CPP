#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        string input,output;
        cin>>input;
        for (ll i = 0;i<input.length();i++){
            if ((input[i] >= '0') && (input[i] <= '9')){
                output.push_back(input[i]);
            }
        }
        ll ans = stoi(output);
        ans = floor(ans/2);
        cout<<ans<<endl;
    }
}
