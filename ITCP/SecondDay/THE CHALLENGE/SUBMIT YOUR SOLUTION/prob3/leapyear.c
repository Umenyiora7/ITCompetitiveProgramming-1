#include"stdio.h"
#include"stdlib.h"


int leap(int y) {
    if(y % 4==0){
    return 1;}
    else{
    if(y%100 ==0){return 1;
    }else{
    if(y%400==0){return 1;}}
    }return 0;
}
int main(){
int y=2022;
if(leap(y)){printf(" leap yr");}else{printf("not leap yr");}




}