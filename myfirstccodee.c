#include <stdio.h>

int main(){
    int sum = 0;
    for( int i = 0; i < 1000; i += 3){
        if(i % 15 != 0)
            sum += i;
    }
    int summ = 0;
    for(int j = 0; j < 1000; j += 5){
        summ += j;
    }

    int result = sum + summ;
    printf("%d", result);

    return 0;
}
