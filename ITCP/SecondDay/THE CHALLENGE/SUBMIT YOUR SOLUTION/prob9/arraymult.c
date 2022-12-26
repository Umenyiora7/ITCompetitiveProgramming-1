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
int a1[7]={-9,1,2,3,4,0,-2};
int a2[4]={2,8,-1,4};
int p=0,k,i,n2=4,n1=7;
int a3[4];

for(i=0;i<n1;i++){
for(k=0;k<n2;k++){
if(a1[i]==a2[k]){
a3[p]=a1[i];
p++;}
}

}
for(p=p-1;p>0;p--){
printf("%d \n",a3[p]);

}}