#include<stdio.h>
#include "allocator.h"

void test_create_node()
{
  /**
   * Test with value pointer as null;
   */

  int *ptr = NULL;
  collection_t *node = create_collection(ptr);
  assert(node == NULL);
}

void test_release_node()
{

}

int main(int argc, char const *argv[])
{
  test_create_node();
  return 0;
}
