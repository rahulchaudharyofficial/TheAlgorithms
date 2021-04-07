#ifndef _ALLOCATOR_H_
#define _ALLOCATOR_H_
    #include<assert.h>
    #include<stdlib.h>
    #include "collection.h"
    
    collection_t* create_collection(void *value);
    void release_collection(collection_t *node);
#endif //End _ALLOCATOR_H_