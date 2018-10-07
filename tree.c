/*
** EPITECH PROJECT, 2018
** tree.c
** File description:
** TREE
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void tree(int size)
{
    int i;
    int j;
    int k;
    int space = 5;
    int line = 4;
    int nb_stars = 1;

    for (i = 0; i <= line; i++) {
	for (j = space; j>=0; j--) {
	    my_putchar(' ');
	}
	for (k = 1; k<=nb_stars; k++){
	    my_putchar('*');
	   
    }
	my_putchar('\n');
	nb_stars = nb_stars + 2;
	space = space - 1;
    }
}

void step(int size)
{
    int last_line = 3;
    int nb_lines = 4;
    int suite = 0;
    int space = 0;

    while(last_line <= size) {
	tree(nb_lines);
	
	
    }
}


void tronc(int size)
{
    int i;
    int line_tronc = 3;

    for (i=1; i<= line_tronc; i++) {
	my_putchar('|');
    }
}



int main(void)
{
    tree(6);
    return(0);
}
