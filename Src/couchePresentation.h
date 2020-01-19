#ifndef COUCHEPRESENTATION_H_INCLUDED
#define COUCHEPRESENTATION_H_INCLUDED


#include <stdlib.h>
#include <gtk/gtk.h>

void lancerApplication();
void demarrage();
void accueil();
void continuer(GtkWidget *pButton, gpointer data);
void button_ok(GtkWidget *pButton, gpointer data);
void affich_resul(GtkWidget *pLabel,gpointer data);
void traitement(const gchar *sText1,const gchar *sText2,gpointer data );
void continuer(GtkWidget *pButton, gpointer data);
void Resolution();
void button_initialiser(GtkWidget *pButton, gpointer data);



#endif // COUCHEPRESENTATION_H_INCLUDED
