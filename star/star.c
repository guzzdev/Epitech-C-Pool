void my_putchar(char e);

const char ascii_star = 42;
const char ascii_space = 32;
const char ascii_newline = 10;

void edge_down(unsigned int size, unsigned int i)
{
    for(int j = 1; j < i; j++)
        my_putchar(ascii_space);
        for(int j = 1; j <= (size * 2 - (2 * i - 1)); j++) {
            if (j == 1 || j == (size*2 - (2*i - 1)))
                my_putchar(ascii_star);
            else 
                my_putchar(ascii_space);
        }
        my_putchar(ascii_newline);
}

void edge_up (unsigned int size, unsigned int i)
{
    for(int j = i; j < size; j++)
        my_putchar(ascii_space);
        for(int j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == (2*i-1))
                my_putchar(ascii_star);
            else 
                my_putchar(ascii_space);
        }
        my_putchar(ascii_newline);
}

void edge_single(unsigned int size)
{
    int center_point = size * 2 + 1;

    for (int i = 0; i != center_point; i++){
        my_putchar(ascii_space);
    }
    my_putchar(ascii_star);
    my_putchar(ascii_newline);
} 

void edge(unsigned int size, char is_inverted)
{
    int branch_size = (size * 2);

    if (size == 1)
        edge_single(size);
    else {
        for (int i = 1; i <= size; i++) {
            for (int y = 0; y < branch_size; y++)
                my_putchar(ascii_space);
            if (is_inverted == 0)
                edge_up(size, i);
            else
                edge_down(size, i);
        }
    }
}

void to_middle(unsigned int size, unsigned int x)
{
    int branch_size = (size * 2 + 1);

    for(int i = 0; i < x; i++) {
        my_putchar(ascii_space);
    }
    my_putchar(ascii_star);
    my_putchar(ascii_newline);
}

void to_back(unsigned int size)
{
    
}


void side(unsigned int size)
{
    if (size == 1) {
        my_putchar(ascii_space);
        my_putchar(ascii_star);
        for (int i = 0; i < 3; i++){
            my_putchar(ascii_space);
        }
        my_putchar(ascii_star);
        my_putchar(ascii_newline);
    } else {
        to_middle(size, 2);
    }
}

void branch(unsigned int size)
{
    int branch_size = (size * 2 + 1);

    for (int i = 0; i != 2; i++){
        for (int j = 0; j != branch_size; j++)
            my_putchar(ascii_star);
        if (i == 0) {
            if (size == 1)
                my_putchar(ascii_space);
            for (int x = 0; x < branch_size-4; x++)
                my_putchar(ascii_space);
        }
    }
    my_putchar(ascii_newline);
}

void draw_star(unsigned int size) {
    int branch_size = 2*size-1;

    edge(size, 0);
    branch(size);
    side(size);
    branch(size);
    edge(size, 1);
}

void star(unsigned int size)
{
    int branch_size;
    
    if (size < 1 || size > __INT_MAX__) {
        return;
    } else {
        draw_star(size);
    }
}