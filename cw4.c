/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
/*#include <stdio.h>
int main()
{ int n,i,j;
    printf("Enter the n\n");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
	for(j=0;j<=n;j++){
	    printf("* ");
	}
        printf("\n");
    }
    return 0;
}
*/
/*
To Print pattern
*
* *
* * *
* * * *
* * * * *
*/
/*
#include <stdio.h>
int main()
{ int n,i,j;
    printf("Enter the n\n");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
	for(j=0;j<=i;j++){
	    printf("* ");
	}
        printf("\n");
    }
    return 0;
}
*/

/* * * * * * 
* * * * 
* * * 
* * 
* 

#include <stdio.h>
int main()
{ int n,i,j;
    printf("Enter the n\n");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
	for(j=1;j<=n-i;j++){
	    printf("* ");
	}
        printf("\n");
    }
    return 0;
}
*/
/*
1
12
123
1234
12345
*/
/*
#include <stdio.h>
int main()
{ int n,i,j;
    printf("Enter the n\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
	    printf("%d", j);
	}
        printf("\n");
    }
    return 0;
}
*/
/*1
23
456
78910
*/
#include <stdio.h>
int main()
{ int n,i,j,count=0;
    printf("Enter the n\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
        count++;
	    printf("%d ", count);
	}
        printf("\n");
    }
    return 0;
}
