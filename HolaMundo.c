/*
    Instalar ncurses
    sudo apt-get update
    sudo apt-get install ncurses-dev
*/
#include <stdio.h>
#include <ncurses.h>
int main(int argc, char const *argv[]) {
  initscr();//Inicializo el modo curses
  printw("Hola Mundo\n"); //Imprimo en pantalla temporal no visible
  refresh();//Refresco pantalla visible con Hola Mundo
  getch();//Espero un caracter
  endwin();//Cierro modo ncurses
  return 0;
}
