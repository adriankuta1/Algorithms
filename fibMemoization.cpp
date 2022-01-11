#include <iostream>
using namespace std;

int fib(int n, int memo[]){

    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else if(n > 1){
        fib(n-1, memo);
        memo[n] = (memo[n-1] + memo[n-2]);

    }

    return memo[n];

}

int main(){

    int n = 45;

    int memo[n] = {0};

    if(n>0){
    memo[1] = 1;
    }

    for (int i = 0; i < n; i++){
    cout << "Fib(" << i << ") = " << fib(i, memo) << endl;
    }


}