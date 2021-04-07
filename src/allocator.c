#include "allocator.h"

collection_t* create_collection(void *value)
{
  assert(value != NULL);
  collection_t *node = (collection_t*) malloc(sizeof(collection_t));
  assert(node != NULL);
  return node;
}

void release_collection(collection_t *node)
{
  assert(node != NULL);
  free(node);
  node = NULL;
}