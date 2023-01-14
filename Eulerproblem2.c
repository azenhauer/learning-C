#include <stdio.h>

/*
This code is a misture of my solution in python to this problem plus an stack exchange pseudocode:

https://codereview.stackexchange.com/questions/106525/recursive-memoized-fibonacci-in-c

also with the help of Chatgpt to transform my O(n/3) code to O(log(n)) using this formula for even finabocci terms

answer = 4613732
*/
long int sumEvenFinabocci(long int n){
    long int f1= 2;
    long int f2= 8;
    long int summ = 2;
    while (f2 <= n){
        summ += f2;
        long int temp = f2;
        f2 = 4*f2 + f1;
        f1 = temp;
    }
    return summ;
}
int main(){
    long int n = 4000000;
    printf("%ld", sumEvenFinabocci(n));
    return 0;
}

