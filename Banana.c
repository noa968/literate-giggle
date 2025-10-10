/**２ 文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存する**/
    int banana = 888;
    
    /**printfは、””の間に、表記したい文字を書く**/
    
   /**文字＋数字を表記したいときは、
   %dは数字を表記し、,の後ろに自由につけた名前を書く**/
    printf("バナナが%d房収穫されたらしい\n",banana);
    banana = banana/2;
    printf("\nそのうちの%d房は入荷される",banana);

    return 0;
}