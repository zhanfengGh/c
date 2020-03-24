int func_a(int (*p)(int, int), int, int);
int add(int, int);
int another_add(int, int);

int main(void)
{
    func_a(add, 1, 2);
    func_a(another_add, 1, 2);
    return 0;
}

int func_a(int (*funcp)(int, int), int a, int b) { return funcp(a, b); }

int add(int a, int b) { return a + b; }

int another_add(int a, int b) { return a + b + 11; }
