//including libraries and .h file#include<stdio.h>                             #include<stdlib.h>#include<string.h>#include "server.h"// main function int main(){printf("no. of files to read:");int file_count;char name[50],short_file1[20][20],short_file2[20][20],short_file3[20][20],short_file4[20][20];int temp,count1=0,count2=0,count3=0,count4=0,i=0,j=0;scanf("%d",&file_count); printf("\nfile name to read:\n");while(file_count){   scanf("%s",name);   temp= file (name);   if(temp==1)   {      for(i=0;i<strlen(name);i++)       {        short_file1[count1][i]=name[i];       }        count1++;   }    if(temp==2)   {       for(i=0;i<strlen(name);i++)       {        short_file2[count2][i]=name[i];       }        count2++;   }    if(temp==3)   {       for(i=0;i<strlen(name);i++)       {        short_file3[count3][i]=name[i];       }        count3++;   }    if(temp==4)   {       for(i=0;i<strlen(name);i++)       {        short_file4[count4][i]=name[i];       }        count4++;   }   file_count--;}printf("\n Shortlisted java & python files are :");for(i=0;i<count1;i++){    for(j=0;short_file1[i][j]!=NULL;j++)    {        printf("%c",short_file1[i][j]);    }	    printf("\n");}    printf("\nShortlisted java files are :");for(i=0;i<count2;i++){   for(j=0;short_file2[i][j]!=NULL;j++)    {        printf("%c",short_file2[i][j]);    }    printf("\n");}    printf("\nShortlisted python files are :");for(i=0;i<count3;i++){    for(j=0;short_file3[i][j]!=NULL;j++)    {        printf("%c",short_file3[i][j]);    }    printf("\n");}   printf("\nShortlisted project management files are :");for(i=0;i<count4;i++){    for(j=0;short_file4[i][j]!=NULL;j++)    {        printf("%c",short_file4[i][j]);    }    printf("\n");}}