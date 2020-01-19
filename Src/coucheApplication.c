#include"coucheApplication.h"


graphe lireGraphe(const gchar * sText1, const gchar * sText2)
{

    char X[100]="",A[100]="";


    int n;
    graphe G,H;

    strcpy(X,sText1);
    printf(" %s %s ",X,A);
    correct(X);
    n=strlen(X);
    G=initialiser(G,n,X);
    strcpy(A,sText2);

    G=A_to_Mat(G,A);

    return G;
}


int Marimont(graphe G)
{
    char E[100]="",S[100]="",V[100]="";
    int n,Hvide;
    graphe H;

    //copier G dans H
    H=affecter(G,H);
    Hvide=videH(H);
    point_entree(E,H);
    point_sortie(S,H);
    while( Hvide!=0 && videE(E)!=0 && videE(S)!=0 )
    {
        reunion(E,S,V);
        sous_graphe(&H,V);
        point_entree(E,H);
        point_sortie(S,H);
        Hvide=videH(H);

    }

return (Hvide);

}

void reunion(char * E,char * S,char V[])
{

    strcpy(V,E);
    strcat(V,S);
}



void correct(char * X)
{
    int c=0,i=0,j=0;
    char ens[100]="";

    while(X[i]!='\0')
    {
        if(X[i]!=';')
        {
            ens[j]=X[i];
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    strcpy(X,ens);
}

graphe A_to_Mat(graphe G, char * A)
{
    int i=0;
    char a,b;
    while(A[i+4]!='\0')
    {
        if((A[i]='(') && (A[i+4]=')') )
        {
            a=(A[i+1]);
            b=(A[i+3]);
            modifier(a,b,G);
        }
       i=i+6;

    }

    return G;
}
