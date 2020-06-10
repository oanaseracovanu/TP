#include<stdio.h>
#include<stdlib.h>

char *alocare_char()
{
    char ch,*buf=NULL,*buf2;
    int n=0;
    for(;;) //bucla infinita care se opreste atunci cand se da enter
    {
        n++; //dimensiunea cuvantului creste cu 1 pt a introduce un nou caracter
        buf2=(char*)realloc(buf,n*sizeof(char)); //se creaza spatiu pentru cuvant, realocand dimensiunea
                    //marim dimensiunea lui buf pentru a putea adauga noul caracter ce va fi introdus                                    
        if(buf2==NULL) 
        {
            printf("Nu se poate aloca memorie!\n");
            free(buf);
            exit(1);
        } 
        buf=buf2; //trecem tot continutul din buf2 in buf
        ch=getchar(); //citim noul caracter
        if(ch=='\n') //daca s-a apasat enter
        {
            buf[n-1]='\0'; //se ajunge la terminatorul de sir pentru ca s-a terminat cuvantul
            return buf; //se returneaza cuvantul citit
        }
        buf[n-1]=ch; //se adauga caracterul nou citit la cele citite anterior
    }
    return buf; 
}

int main()
{
    char *sir;
    int *n;
    sir=alocare_char();
    printf("%s\n ",sir);
    *n=alocare_vector();
    afisare_vector(*n);
    return 0;

}