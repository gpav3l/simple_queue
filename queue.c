#include "queue.h"

/*!
 * Initialize queue for use, must be callad before first access.
 */
void queue_init(queue_t *q)
{
	q->size = 0;
	q->front = 0;
	q->rear = 0;
	memset(q->buff, 0, sizeof(q->buff[0]])*QUEUE_SIZE);
}
 
/*!
 * Add byte to queue
 */
void queue_append(queue_t *q, uint8_t byte)
{
	if(q->size < QUEUE_SIZE) {
		q->buff[q->front++] = byte;
		q->size++;
		if(q->front == QUEUE_SIZE) q->front = 0;
	}
}

/*!
 * Pop bytes from queue
 */
uint8_t queue_pop(queue_t *q)
{
	uint8_t ret_val = 0x0;

	if(q->size != 0) {
		ret_val = q->buff[q->rear++];
		q->size--;
		if(q->rear == QUEUE_SIZE) q->rear = 0;
	}

	return ret_val;
}

/*!
 *  Get ammount of bytes in queue
 */
uint16_t queue_size(queue_t *q)
{
	return q->size;
}

/*!
 * Clean queue
 */
void queue_clean(queue_t *q)
{
	q->size = 0;
	q->rear = q->front;
}

/*!
 * Peek data in queue
 */
uint8_t queue_peek(queue_t *q)
{
	return q->buff[q->front];
}
