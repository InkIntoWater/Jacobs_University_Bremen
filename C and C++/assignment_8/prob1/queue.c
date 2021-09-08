/* 
CH-230-A
a8_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    //declaring a new node and malloc of it
    Node *newelem = (Node *)malloc(sizeof(Node));
    if (queue_is_full(pq))
    {
        return -1;
    }
    if (newelem == NULL)
    {
        return -1;
    }

    newelem->item = item;

    newelem->next = NULL;

    if (queue_is_empty(pq))
    {
        pq->front = newelem;
        pq->rear = pq->front;
    }
    else
    {
        pq->rear->next = newelem;
        pq->rear = pq->rear->next;
    }

    pq->items++;

    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
   //add missing elements
    return 0;
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
    {
        dequeue(&dummy, pq);
    }
}