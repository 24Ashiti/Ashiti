#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("skill.txt","wt");
    fprintf(fp,"welcome to skill qode decode your skill here...\n");
    fpunts("yor are now enterning to learing c language now...\n",fp);
    fpunts("today is friday and c language complate...\n",fp);
    fclose(fp);
}
