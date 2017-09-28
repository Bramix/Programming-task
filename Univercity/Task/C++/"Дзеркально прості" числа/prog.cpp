#include <stdio.h>
#include <cmath>

//перевірка числа на простоту
bool Easy(int n){
    bool res = true;

    if(n == 1)
        return false;

    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;

    return res;
}

//перевернути число
int revers(int n){
    int res = 0, k = 0;
    
    while(n > 0){
         res = res * 10 + n % 10;
         n = n / 10;   
    }

    return res;
}

//головна функція
int main(){
    int a, b, k, reverce, res = 0, buf;

    scanf("%d%d", &a, &b);
    if(b < a) {
         reverce = a;
         a = b;
         b = reverce;
    }
    for(int i = a; i <= b; i++){
        if(Easy(i) == true){

            reverce = revers(i);

            if(Easy(reverce) == true){
                res++;
            }
        }
    }

    printf("%d", res);
    
    return 0;
}
