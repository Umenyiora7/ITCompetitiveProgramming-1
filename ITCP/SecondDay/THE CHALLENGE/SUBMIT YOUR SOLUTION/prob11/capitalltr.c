#include"stdio.h"
#include"stdlib.h"


int tst(char ch[30]) {
int i;
 for (i=0;i<strlen(ch);i++){
if((ch[i]<65)||(ch[i]>90)){return 0;}
}
return 1;
}
int main(){
char ch[30];
strcpy(ch,"Dz");
if(tst(ch)){
printf("true");}
else{printf("false");  }


}