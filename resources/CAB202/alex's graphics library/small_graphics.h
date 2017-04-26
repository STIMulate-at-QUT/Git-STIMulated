/*
 * small_graphics.h
 *
 *  Created on: 11 May 2016
 *      Author: Alex
 */

#ifndef SMALL_GRAPHICS_H_
#define SMALL_GRAPHICS_H_

/*
 * Basis from graphics.c
 */
void draw_string_small(unsigned char x, unsigned char y, char* string);

/*
 * Basis from grahpics.c
 */
void draw_char_small(unsigned char x, unsigned char y, char character);

/*
 * Adapted from the zdk
 */
void draw_int_small(unsigned char x, unsigned char y, int value);

void draw_float_small(unsigned char x, unsigned y, float value);

#endif /* SMALL_GRAPHICS_H_ */
