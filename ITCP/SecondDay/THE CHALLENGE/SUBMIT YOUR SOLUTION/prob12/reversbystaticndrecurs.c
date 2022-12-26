void revstr(char *str1)
{
static int i, len, temp;
    len = strlen(str1); 
    if (i < len/2) {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
        i++;
        revstr(str1); 
  }}
int main(){

char ch[5];
strcpy(ch,"hello");
revstr(ch);
printf("%s",ch);

}