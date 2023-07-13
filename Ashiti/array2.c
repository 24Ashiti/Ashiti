    #include<stdio.h>
int main()
{
   int m[5],e[5],g[5],total,per;
   for(int i=0;i<5;i++)
   {
       printf("enter marks:");
       scanf("%d",&m[i]);
       scanf("%d",&e[i]);
       scanf("%d",&g[i]);
       total=m[i]+e[i]+g[i];
       printf("total is:%d\n",total); 
       per=(total*100)/300;
       printf("per is:%d\n",per);
       if(per<=30)
       {
           printf("grade is: fail\n");
       }
       else if(per<=50)
       {
           printf("grade is:d\n");
       }
       else if(per<=70)
       {
           printf("grade is:c\n");
       }
       else if(per<=90)
       {
            printf("grade is:b\n");
       }
       else 
       {
           printf("grade is:a\n");
       }
   }
   return 0;
}    