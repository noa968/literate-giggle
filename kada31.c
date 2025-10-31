int main()
{
   int k,l;
   printf("わんこそばを最低で何杯食べられますか？");
   scanf("%d", &k);
   printf("わんこそばを最高で何杯食べられますか？");
   scanf("%d",&l);
   
   if(l>=60)
   {
     printf("男性の平均以上ですね");
   } 
 
   else if (k>=40&&l<60)
   {
     printf("女性の平均以上ですね");
   } 
   
   else 
   {
     printf("女性の平均よりも少ないですね");
   }