#ifndef _COLLECTION_H_
#define _COLLECTION_H_

typedef struct CollectionNode
{
  void *value;
  struct CollectionNode *previous;
  struct CollectionNode *next;
} collection_t;

#endif /* end of include guard: _COLLECTION_H_ */
