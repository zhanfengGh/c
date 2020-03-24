#include <stdio.h>

/*! \enum color
 *
 *  Detailed description
 */
enum color { RED, GREEN, BLUE };
typedef enum color color;

/*! \enum anonymous enum
 *
 *  Detailed description
 */
enum { buffsize = 256 };

typedef enum { IPHONE, XIAOMI } mobile_type;

static void print_color(enum color);

void check_mobile(mobile_type);

int main(int argc, const char *argv[])
{
    enum color c1 = RED;
    color c2 = GREEN;
    print_color(RED);
    check_mobile(IPHONE);
    return 0;
}

static void print_color(enum color c)
{
    const char *color_name = "Invalid color";
    switch (c) {
    case RED:
        color_name = "red";
        break;
    case GREEN:
        color_name = "green";
        break;
    case BLUE:
        color_name = "blue";
        break;
    };
    printf("color => %s\n", color_name);
}

void check_mobile(mobile_type mt)
{
    if (mt == IPHONE) {
        printf("This is a IPhone\n");
    }
}
