#include"stdio.h"
#include"stdlib.h"
#include"string.h"

struct tab {
    char ch[30];
};

int main() {
    int i=1,k,d,n;
    struct tab t[100];
    printf("donner nombre ch :\n");
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("enter char : \n");
        scanf("%s",t[i].ch);

    }
    printf("**********\n");
    for(i=0; i<n; i++) {
        printf("* %s",t[i].ch);
        d= strlen(t[i].ch);
        for(d=d;d<7;d++){
        printf(" ");
        }printf("*\n"); 
        
         }  
        
    printf("**********\n");

}