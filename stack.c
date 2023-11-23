#include "stack.h"
#include "node.h"
#include <stdlib.h>

struct stack {
  Node* summit;
};

Stack* stack_create() {
  Stack* stack = (Stack *) malloc(sizeof(Stack));
  stack->summit = NULL;
  return stack;
}

void stack_set_summit(Stack* stack, Node* node) {
  stack->summit = node;
}

Node* stack_get_summit(Stack* stack) {
  return stack->summit;
}

void stack_push(Stack* stack, Node* node) {
  node_set_bottom(node, stack->summit);
  stack->summit = node;
}

void stack_pop(Stack* stack) {
  Node* auxiliary;
  auxiliary = node_get_bottom(stack_get_summit(stack));
  node_free(stack_get_summit(stack));
  stack_set_summit(stack, auxiliary);
}

void stack_free(Stack* stack) {
  while(node_get_bottom(stack_get_summit(stack))) {
    stack_pop(stack);
  }
  stack_free(stack);
}
