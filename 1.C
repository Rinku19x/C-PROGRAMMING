//Write to calculate the addition of any two Numbers//

#include<stdio.h>
    int main()
    {
        int n1,n2,ans;

        printf("Enter First Number=");
        scanf("%d",&n1);
        printf("Enter Second Number= ");
        scanf("%d",&n2);

        ans=n1+n2;

        printf("Addition=%d",ans);
        return 0;
    }