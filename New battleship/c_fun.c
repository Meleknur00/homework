#include <stdio.h>
#include <unistd.h>
#include <termios.h>

char get_ch()
{
	struct termios default_settings, new_settings;
	unsigned char c;
	tcgetattr(STDIN_FILENO, &default_settings);
	new_settings = default_settings;
	new_settings.c_lflag &=(~ICANON & ~ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);
	c = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &default_settings);
	return c;
}