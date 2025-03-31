/*
** EPITECH PROJECT, 2021
** Create window
** File description:
** create_window
*/

#include <SFML/Graphics.h>

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode w_settings = {800, 600, 32};
    sfEvent event;

    window = sfRenderWindow_create(w_settings, "Window", sfDefaultStyle, NULL);
    
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
                if (event.type == sfEvtClosed)
                    sfRenderWindow_close(window);
            sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}