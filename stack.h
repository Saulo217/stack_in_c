#include "node.h"
typedef struct stack Stack;

Stack* stack_create(void);
void stack_change_summit(Stack* stack, Node* node);
void stack_push(Stack* stack, Node* node);
void stack_pop(Stack* stack);
