#include<stdio.h>
void main()
{  int a[20][20],s[20][3],m,n,i,j,k;
printf("Enter row and column\n");
scanf("%d%d",&m,&n);
printf("Enter elements\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("matrix is\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%5d",a[i][j]);
    }  printf("\n");
}
s[0][0]=m;
s[0][1]=n;
k=1;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=0){
            s[k][0]=i;
            s[k][1]=j;
            s[k][2]=a[i][j];
            k++;
        }
    }
}  s[0][2]=k-1;
printf("\nEfficient representation \n");
for(i=0;i<k;i++){
    for(j=0;j<3;j++){
        printf("%5d",s[i][j]);
    }  printf("\n");
}

}
