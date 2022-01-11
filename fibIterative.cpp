#include <iostream>
using namespace std;

int fibIterative(long int n, long int c){

    long int a = 1;
    long int b = 0;

    if(n == 0){
        cout << "fib(0) = " << b << endl;
        return b;
    }else if(n == 1){
        cout << "fib(1) = " << a << endl;
        return a;
    }


    if(n > 1){
        for(int i = 0; i < n; i ++){


            c = a + b;
            b = a;
            a = c;

            cout << "fib(" << i+2 << ") = " << a << endl;

        }

    }

    return c;

}

int main(){

    long int n = 60;
    long int c = 0;

    fibIterative(n,c);

}