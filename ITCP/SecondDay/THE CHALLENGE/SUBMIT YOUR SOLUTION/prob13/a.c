#include"stdio.h"
#include"stdlib.h"


/*int tst(char ch[30]) {
int i;
 for (i=0;i<strlen(ch);i++){
if((ch[i]<65)||(ch[i]>90)){return 0;}
}
return 1;
}*/
int main(){
char c[1];
char ch[5]="hello",ch2[5]="olhel";
int ex,k,i;
ex=0;
for(k=0;k<strlen(ch);k++){
for(i=0;i<strlen(ch);i++){
if(ch[i]==ch2[k]){
ex=1;

}}}
if(ex==1){
printf("true");}
else{ printf("false");}

}