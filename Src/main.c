#include <stdlib.h>
#include <gtk/gtk.h>

int main (int argc, char *argv[])
{

    gtk_init(&argc, &argv);

    //fonction qui lance l'application
    lancerApplication();

    gtk_main();

    return EXIT_SUCCESS;

}
