#include <gtk/gtk.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "dict.h"
#include "store.h"
#include "search.h"
#include "print.h"
harr *hl;
void search_word(GtkWidget *widget, GtkWidget *entry){
	const gchar *entry_text;
  	entry_text = gtk_entry_get_text(GTK_ENTRY(entry));
	int i = 0;
	char ch, str[21]; 
	while(entry_text[i] != '\0' && i < 20){
		str[i] = entry_text[i];
		i++;
	}
	str[i] = '\0';
	search(hl, str);
}
int main(int argc, char *argv[]){
	if(argc == 2)
		if(strcmp(argv[1], "-h") == 0)
			printf("MyDictionary\nType word to search in textbox and press enter or search button.\n ");
	GtkWidget *window;
	GtkWidget *grid;
	GtkWidget *button;
	GtkWidget *entry;
	hl = store();
       /* This is called in all GTK applications. Arguments are parsed
        * from the command line and are returned to the application.
        */
	gtk_init (&argc, &argv);
        /* create a new window, and set its title */
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_set_size_request (GTK_WIDGET (window), 300, 300);
  	gtk_window_set_title(GTK_WINDOW (window), "My Dictionary");
  	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
  	gtk_container_set_border_width (GTK_CONTAINER (window), 10);

 	/* Here we construct the container that is going pack our buttons */
  	grid = gtk_grid_new ();

  	/* Pack the container in the window */
  	gtk_container_add (GTK_CONTAINER (window), grid);
	
	entry = gtk_entry_new ();
	gtk_entry_set_max_length (GTK_ENTRY (entry), 20);
	g_signal_connect (entry, "activate", G_CALLBACK (search_word), (gpointer)entry);
	gtk_entry_set_text (GTK_ENTRY (entry), "Enter your word here");
	gtk_grid_attach (GTK_GRID (grid), entry, 0, 0, 1, 1);

  	button = gtk_button_new_with_label ("Search");
  	g_signal_connect (button, "clicked", G_CALLBACK (search_word), (gpointer)entry);
  	gtk_grid_attach (GTK_GRID (grid), button, 1, 0, 1, 1);

  	button = gtk_button_new_with_label ("Quit");
  	g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);
  	gtk_grid_attach (GTK_GRID (grid), button, 0, 1, 2, 1);

  	/* Now that we are done packing our widgets, we show them all
   	* in one go, by calling gtk_widget_show_all() on the window.
   	* This call recursively calls gtk_widget_show() on all widgets
   	* that are contained in the window, directly or indirectly.
   	*/
  	gtk_widget_show_all (window);

  	/* All GTK applications must have a gtk_main(). Control ends here
  	* and waits for an event to occur (like a key press or a mouse event),
   	* until gtk_main_quit() is called.
   	*/
  	gtk_main ();

  	return 0;
}
