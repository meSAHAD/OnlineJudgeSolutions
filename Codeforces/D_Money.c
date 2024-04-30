#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int five=n/500;
    n=n %500;
    int hun=n/100;
    n=n%100;
    int fifty=n/50;
    n=n%50;
    int ten=n/10;
    n=n%10;
    int fiv=n/5;
    n=n%5;
    int one=n;
    for(int i=0;i<one; i++) printf("1 ");
    for(int i=0;i<fiv; i++) printf("5 ");
    for(int i=0;i<ten; i++) printf("10 ");
    for(int i=0;i<fifty; i++) printf("50 ");
    for(int i=0;i<hun; i++) printf("100 ");
    for(int i=0;i<five; i++) printf("500 ");
    return 0;
}
