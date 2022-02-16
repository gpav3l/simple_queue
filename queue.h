#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdint.h>

#define QUEUE_SIZE (32)

typedef struct queue_s {
	uint8_t buff[QUEUE_SIZE];
	int front;
	int rear;
	int size;
} queue_t;

void queue_init(queue_t *q);
void queue_append(queue_t *q, uint8_t byte);
uint8_t queue_pop(queue_t *q);
uint16_t queue_size(queue_t *q);
void queue_clean(queue_t *q);
uint8_t queue_peek(queue_t *q);

#endif
