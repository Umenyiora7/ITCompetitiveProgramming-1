int monotdc(int a[5]){
int i;
for(i=0;i<5;i++){
if(a[i-1]<a[i])
{

return 0;
}

}
return 1;
}

int monotc(int a[5])
{
int i;
for(i=0;i<5;i++){
if(a[i-1]>a[i])
{

return 0;
}

}
return 1;
}


int main(){

int a[5]={1,2,4,5};


if(monotdc(a)||monotc(a)){
printf("monotone");}
else{
printf("no monotone");

}
}