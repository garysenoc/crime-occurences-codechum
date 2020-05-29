#include <stdio.h>

int main(){

    int x,y,i,j;
    scanf("%d %d",&x,&y);
    int arr[x][y];

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int most=arr[0][0],count =1,num,a,b,max=1,num2 = arr[0][0];

    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            num = arr[i][j];
            count=1;
            for(a=0;a<x;a++){
                for(b=0;b<y;b++)
                    if(num==arr[a][b])
                        count++;
                }
                if(count>=max){
                    if(num> num2)
                        num2 = num;
                    max = count;
            }
        }
    }
    printf("%d",num2);

    return 0;
}
