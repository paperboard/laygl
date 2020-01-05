#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[]) {
    window_init();
    renderer_init();

    struct window *window = window_create(1280, 720, "Learn OpenGL #1");
    struct renderer *renderer = renderer_create();

    window_switch_context(window);
    renderer_match_viewport(renderer, window);

    main_loop(window, renderer);

    renderer_destroy(renderer);
    window_destroy(window);

    renderer_fini();
    window_fini();

	return EXIT_SUCCESS;
}

void main_loop(struct window *window, struct renderer *renderer) {
    while (!window_should_close(window)) {
        glfwPollEvents(); // TODO: Temporary way of handling events.

        renderer_clear(renderer);
        renderer_render(renderer);
        window_refresh(window);
    }
}