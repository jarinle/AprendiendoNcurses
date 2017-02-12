/*
    Imprime en negrita todo lo que escribo
    y sale cuando presiono 0
*/
#include <stdio.h>
#include <ncurses.h>
int main(int argc, char const *argv[]) {
    int ch;
    initscr();//curses mode
    raw();//Desabilitamos linea de buffer, otras palabras controlamos todo lo que ingresa el usuario
    keypad(stdscr,TRUE);//Habilitamos la escucha de teclas como F1, etc..
    noecho();//Si activado, primero despliega el caracter ingresado pero aun no esta listo en el programa
    ch = getch();//Espera la entrada de un caracter y lo guarda en ch
    while (ch != '0') {
        if (ch == KEY_LEFT) {
          printw("Flecha <-");
        }else{
          //printw("The pressed key is");
          attron(A_BOLD);
          printw("%c",ch);
          attroff(A_BOLD);
        }
        refresh();
        ch = getch();
    }

  //  getch();
    endwin();


  return 0;
}
