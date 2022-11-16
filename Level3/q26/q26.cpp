#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    long long x;
    for(long long i = 0;;i++){
        x = i * 1584891 + 32134;
        if(x % 3438478 == 193127){
            cout << x << endl;
            break;
        }
    }
    //  こっちでもできる。
    // for(x=100000000;;x++){
    //     if(x%1584891 == 32134%1584891 && x%3438478 == 193127%3438478){
    //         cout << endl << x  << endl;
    //         break;
    //     }
    // }

    return 0;   
}