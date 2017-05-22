#include<stdio.h>
int main()
{
    int R,L;
    int countH=0, countT=0;
    char str[501];
    scanf("%d", &R);
    for (int i=1;i<=R;i++){
        scanf("%d", &L);
        getchar();
        gets(str);
        for(j=0;j<L;j++) {
            if(str[j]=='H')
                countH++;
            if(str[j]=='T')
                countT++;
            if(countT>countH)
                flag=0;
            if(countH>countT)
                flag=1;
        }
    }
    return 0;
}
