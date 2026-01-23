#include <math.h>
#include <stdio.h>

//int quadratic(int a,int b,int c)
//{
//    int x=(-b+-sqrt(b*b-4*a*c))/(2*a);
   
//    return x;
//}

int quad()
{
    double a,b,c,D,x1,x2;
    
    printf("a,b,cに数字を入力してください。");
    scanf("%1f %1f %1f",&a,&b,&c);
    
    if(a==0)
    {
        printf("0以外の数字を入力してください。");
    }
    else
    {
        D=b*b-4*a*c;
        if(D>0)
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            printf("解は、%gと%gです。\n",x1,x2);
        }
        else if(D==0)
        {
            printf("解は、重解となり%gです。\n",x1);
        }
        else
        {
            printf("虚数解となるため、解はありません。\n");
        }
    }

    return 0;
}

int main()
{
    printf("二次方程式を使ってみよう");
    quad();
    printf("よくできた！じゃあ、つぎは、、、aをゼロにしてみ？");
    quad();
}