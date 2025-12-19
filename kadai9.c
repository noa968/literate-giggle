#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // pseudo random number = A set of values or elements that are statistically random
    //                         (Don't use these for any sort of cryptographic security)
    
    srand(time(0));
    
    int intelligence = (rand() % 20 );
    int stamina = (rand() %(20-intelligence));
    int charisma = 20-(intelligence+stamina);
    
    if(intelligence>=stamina&&intelligence>=charisma)
    {
        printf("魔法使い系「mage」:%d",intelligence);
    }
    
    else if(stamina>=intelligence&&stamina>=charisma)
    {
        printf("ファイター系「knight」:%d",stamina);
    }
    
    else
    {
        printf("盗人系「thief」:%d",charisma);
    }

    return 0;
}