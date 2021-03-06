#ifndef SCREEN_SPEED_H
#define SCREEN_SPEED_H

void screen_speed_layer_init(Window* window);
void screen_speed_deinit();
void screen_speed_show_speed(bool force_units);
void screen_speed_start_rotation();
void speed_layer_set_text(SpeedLayer *speed_layer, char *textdata);

#endif // SCREEN_SPEED_H
