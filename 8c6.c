#include <stdio.h>
#include <string.h>
int main(){
    system("clear");
    FILE *f=fopen("temp.txt","r");
    FILE *g=fopen("natija.txt","w");
    char belgi[100],*ptr;
    int sch=0;
    while(fscanf(f,"%s",belgi)==1)
    {
      ptr=strstr(belgi,"0");
      
      if(ptr!=0)
      {
       sch+=1;
      }
    }
      fprintf(g,"%d ta son bor\n",sch);

    printf("mission complete bro!");
    fclose(f);
    fclose(g);
    return 0;
}






