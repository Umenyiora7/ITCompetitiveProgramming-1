
#include<stdio.h>
#include<stdlib.h>

void tri_selection(int t[], int n)
{
int i,j,m,tmp;
for(i = 0 ; i < n-1 ; i++)
{
    m = i;
    for(j = i+1 ; j < n ; j++)
        if(t[j] < t[m])
            m = j;
    if(m!=i)
    {
        tmp = t[i];
        t[i]=t[m];
        t[m]=tmp;
    }
}
}

main()
{
    int T[10]= {5,2,126,9,51,7,1,6,12,24};
    tri_selection(T,10);
    for (int i=0 ; i< 10 ; i++)
        printf("%d ",T[i]);
}