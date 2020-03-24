struct Node {
    int data;
    struct Node *pre;
    struct Node *next;
};

typedef struct Node Node;

Node *init();

void insert_at_tail(Node *head, int data);

void insert_at_head(Node *head, int data);

void print_list(Node *head);

void free_list(Node *head);
