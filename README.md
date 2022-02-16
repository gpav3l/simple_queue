# WTF

Simple queue ralization

# Usage

```c

#include "queue.h"

queue_t tx_queue;

int main()
{
    queue_init(&tx_queue);

    queue_append(&tx_queue, 'a');
    queue_append(&tx_queue, 'b');
    queue_append(&tx_queue, 'c');
    
    while(queue_size(&tx_queue) != 0)
        printf("%c", queue_pop(&tx_queue));
    
    return 0;
}
```
