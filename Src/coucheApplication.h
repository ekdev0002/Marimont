#ifndef COUCHEAPPLICATION_H_INCLUDED
#define COUCHEAPPLICATION_H_INCLUDED


#include <stdlib.h>
#include <gtk/gtk.h>
#include"coucheMetier.h"


graphe lireGraphe(const gchar * sText1, const gchar * sText2);
int Marimont(graphe G);
void correct(char * X);
graphe A_to_Mat(graphe G, char * A);
void reunion(char * E,char * S,char V[]);


#endif // COUCHEAPPLICATION_H_INCLUDED
