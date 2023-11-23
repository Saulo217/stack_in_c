#include "node.h"
#include <stdlib.h>

struct node {
  int value;
  Node* bottom;
};

Node* node_create(void) {
  Node* node = (Node *) malloc(sizeof(Node));
  node->value = 0;
  node->bottom = NULL;
  return node;
}

void node_set_value(Node* node, int value) {
  node->value = value;
}

int node_get_value(Node* node) {
  return node->value;
}

void node_set_bottom(Node* node, Node* bottom) {
  node->bottom = bottom;
}

Node* node_get_bottom(Node* node) {
  return node->bottom;
}

void node_free(Node* node) {
  free(node);
  node = NULL;
}
