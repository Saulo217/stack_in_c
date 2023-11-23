typedef struct node Node;

Node* node_create(void);
void node_set_value(Node* node, int value);
int node_get_value(Node* node);
void node_set_bottom(Node* node, Node* bottom);
Node* node_get_bottom(Node* node);
void node_free(Node* node);
