#include <stdio.h>
#include<string.h>

int main()
{
    char password[256];
    int hasUpper=0, hasLower=0;
    
    printf("パスワードを入力してください>>>");
    scanf("%99s",password);
    
    int length=strlen(password);
    
    for(int i=0;i<length;i++){
        char c=password[i];
        
        if(c>='A'&&c<='Z')
        {
            hasUpper=1;
        }
        if(c>='a'&&c<='z')
        {
            hasLower=1;
        }
    }
    int isStrong=1;
    
    if(length<8)
       isStrong=0;
    if(!hasUpper)
       isStrong=0;
    if(!hasLower)
       isStrong=0;
       
    if(isStrong)
    {
        printf("強力なパスワードです。\n");
    }
    else
    {
        printf("強いパスワードではありません。\n改善点\n");
        
        if(length<8)
        {
        printf("8文字以上入力してください。\n");
        }
        if(!hasUpper)
        {
        printf("大文字を含めたパスワードにしてください。\n");
        }

        if(!hasLower)
        {
        printf("小文字を含めたパスワードにしてください。\n");
        }
    }


    return 0;
}