#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<ctype.h>

int main()
{
    int a[10005];
    int i, n;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    while (scanf("%d", &i)==1) {
        /*int j;
        int p=-1;*/
        if (i>0 && i<=n)
            printf("%d\n", a[i-1]);
        else if (i<0 && -i<=n)
            printf("%d\n", a[i+n]);
        else
            printf("OUT OF RANGE\n");

    }



    return 0;
}

/**************************************************************
	Problem: 1461
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

