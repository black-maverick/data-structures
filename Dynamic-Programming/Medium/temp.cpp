#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000007


int main(){
        ll test , num;
        cin>>test;

        ll arr[36];
        arr[0] = 1;

        for(int i = 1 ; i < 36 ; i++ ){
                if(i-7 >= 0){
                        arr[i] = ( arr[i-1] - (arr[i-6] - arr[i-7]) ) * 3;
                        cout<< arr[i-6] - arr[i-7] <<endl;
                }
                else if(i-6 >= 0){
                        arr[i] = ( arr[i-1] - arr[i-6] ) * 3;
                }
                else{
                        arr[i] = arr[i-1]*3;
                }
        }

        while(test--){
                cin >> num;
                cout << arr[num-1] << endl;
        }
}
