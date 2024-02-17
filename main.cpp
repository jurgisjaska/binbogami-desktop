#include <gtk/gtk.h>

void hello(GtkWidget *widget, gpointer data) {
    g_print("Hello World\n");
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *button;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    button = gtk_button_new_with_label("Hello World");

    g_signal_connect(button, "clicked", G_CALLBACK(hello), NULL);

    gtk_container_add(GTK_CONTAINER(window), button);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}