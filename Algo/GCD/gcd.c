#include <stdio.h>


int gcd(int a, int b){
    while(a!=b){
        if(a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    return a;
}

int main(){
    printf("%d", gcd(16,2));

    
    return 0;




}