// #include <stdio.h>
#include<iostream>

#include <ncurses.h>

using namespace std;

#define WIDTH 90
#define HEIGHT 10

int startx = 0;
int starty = 0;

const char *choices[] = {
			"Choice 1",
			"Choice 2",
			"Choice 3",
			"Choice 4",
			"Exit",
		  };
int n_choices = sizeof(choices) / sizeof(char *);

void print_menu(WINDOW *menu_win, int highlight);

int main()
{	WINDOW *menu_win;
	int highlight = 1;
	int choice = 0;
	int c;

	initscr();
	clear();
	noecho();
	cbreak();	/* Line buffering disabled. pass on everything */

	startx = (225 - WIDTH) / 2; // parte al eje x
	starty = (24 - HEIGHT) / 2; //parte al eje y

	menu_win = newwin(HEIGHT, WIDTH, starty, startx);
	keypad(menu_win, true);
	// mvprintw(0, 0, "Use arrow keys to go up and down, Press enter to select a choice");
	refresh();
	print_menu(menu_win, highlight);
	while(1)
	{	c = wgetch(menu_win);
		switch(c)
		{	case KEY_UP:
				if(highlight == 1)
					highlight = n_choices;
				else
					--highlight;
				break;
			case KEY_DOWN:
				if(highlight == n_choices)
					highlight = 1;
				else
					++highlight;
				break;
			case 10:
				choice = highlight;
				break;
			default:
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'", c, c);
				refresh();
				break;
		}
		print_menu(menu_win, highlight);
		if(choice != 0)	/* User did a choice come out of the infinite loop */
			break;
	}
	mvprintw(23, 0, "You chose choice %d with choice string %s\n", choice, choices[choice - 1]);
	clrtoeol();
    getch();
	refresh();
	endwin();
	return 0;
}


void print_menu(WINDOW *menu_win, int highlight){
	int x, y, i;

	x = 10;
	y = 2;
	box(menu_win, 0, 0);
	for(i = 0; i < n_choices; ++i)
	{	if(highlight == i + 1) /* High light the present choice */
		{	wattron(menu_win,A_STANDOUT ); // A_BLINK, A_REVERSE, A_BOLD, A_DIM, A_UNDERLINE, A_STANDOUT
			mvwprintw(menu_win, y, x, "%s", choices[i]);
			wattroff(menu_win,A_STANDOUT );
		}
		else
			mvwprintw(menu_win, y, x, "%s", choices[i]);
		++y;
	}
	wrefresh(menu_win);
}
