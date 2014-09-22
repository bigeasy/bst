#include <stdio.h>
#include <stdlib.h>
#include "node_pool.h"


int main ()
{
    node_t nodes[15];

    np_pool_t node_pool;

    np_initialize(&node_pool, sizeof(node_t), nodes, sizeof(nodes));

    np_allocate(&node_pool);

    return 0;
}
