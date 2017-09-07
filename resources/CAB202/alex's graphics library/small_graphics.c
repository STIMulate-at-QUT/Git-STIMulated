#include "small_graphics.h"
#include "ascii_font_small.h"

void draw_string_small(unsigned char x, unsigned char y, char* string){
	unsigned char i = 0;

	while (*characters != 0) {
		draw_char_small(top_left_x+i*5, top_left_y, *(characters));

		characters++;
		i++;
	}
}

void draw_char_small(unsigned char x, unsigned char y, char character){
	int char_width = 4;
	int char_height = 5;

	// loop through each pixel in the character array and plot each one individually
	for (unsigned char i = 0; i<char_width; i++) {
		for (unsigned char j = 0; j<char_height; j++) {
			set_pixel(top_left_x+i, top_left_y+j, (pgm_read_byte(&(ASCII[character - 0x20][i])) & (1 << j)) >> j);
		}
	}
}


void draw_int_small(unsigned char x, unsigned char y, int value){
	char buffer[100];
	sprintf(buffer, "%d", value);
	draw_string_small(x, y, buffer);
}

void draw_float_small(unsigned char x, unsigned y, float value){
	char buffer[100];
	sprintf(buffer, "%f", value);
	draw_string_small(x, y, buffer);
}

void draw_formatted_small( int x, int y, const char * format, ... ) {
	va_list args;
	va_start( args, format );
	char buffer[1000];
	vsprintf( buffer, format, args );
	draw_string_small( x, y, buffer );
}
