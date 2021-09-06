#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"server.h"

int  file( char *name)
   {
                FILE *fp; char str[50];int count=0,jv=0,pv=0;
                     fp=fopen(name,"r+");
                 if(fp==NULL)
                             {
                                  printf("%s file not found .Enter correct file name\n",name);
                                   return 0;
                                   }
                else
              {
                  while(!feof(fp))
                    {
                        fscanf(fp,"%s",str);
                            if(!strcmp(str,"java"))
                             {
                                 jv=1;
                                 count++;
                                 }

                                 if(!strcmp(str,"python"))
                                 {
                                    pv=1;
                                    count++;
                                 }

                         else if(!strcmp(str,"project"))
                            {
                           fscanf(fp,"%s",str);

                             if(!strcmp(str,"management"))
                             {
                                return 4;
                               count++;
                                    break;
                             }
                            }
                    }
                 if(count==0)
                 {
                return 0;
                 }

                 if(jv==1&&pv==1)
                 {
                     return 1;
                 }

                 if(jv==1&&pv==0)

                 {
                     return 2;
                 }

                if(jv==0&&pv==1)
                 {
                     return 3;
                 }
            }
            return 0;
    }


