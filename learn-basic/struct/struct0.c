#include <stdio.h>
#include <string.h>
/*! \struct Point
 *  \brief Point with x,y
 *
 *  Point express by x, y
 */
struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point p1;
    struct Point p2;
};

struct Rect rect_build(struct Point, struct Point);

int main(int argc, const char *argv[])
{
    struct Point p0 = {0, 0};
    struct Point p1, p2;

    p1.x = 1;
    p1.y = 1;
    memset(&p2, 0, sizeof(p2));

    struct Point *ptr = &p1;

    int p0_x = p0.x;

    int p0_y = (*ptr).x;
    p0_y = ptr->x;

    struct {
        struct Point *ptr1;
        struct Point *ptr2;
    } rec2;

    rec2.ptr1 = ptr;
    rec2.ptr2 = &p2;

    struct Rect rect = rect_build(p1, p2);
    printf("rect.p1.x=%d\n", rect.p1.x);

    return 0;
}

struct Rect rect_build(const struct Point p1, const struct Point p2)
{
    struct Rect tmp = {p1, p2};
    return tmp;
}
