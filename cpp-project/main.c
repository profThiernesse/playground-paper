#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    int i;
    struct spaper table;

    init_paper(20,20,30);
    move_to(0,7);
    colorize();
    move_right();
    change_color(0,155,0);
    colorize();
    repeat (19) {
        move_down();
        colorize();
        change_color(125,55,10);
    } loop;

    create_table();

    /*
    _init_paper(&table,20,20,20);
    _move_to(&table,0,7);
    _colorize(table);
    _move_right(&table);
    _change_color(&table,0,155,0);
    _colorize(table);
    for (i=0;i<19;i++) {
        _move_down(&table);
        _colorize(table);
        _change_color(&table,0,155,i*10);
    }
    _create_table(table);
    */

    return 0;
}

