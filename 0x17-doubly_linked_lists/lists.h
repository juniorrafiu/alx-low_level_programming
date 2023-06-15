#ifndef LISTS_H
#define LISTS_H

/* Structure for a doubly linked list node */
typedef struct dlistint_s
{
    int n;                      /* Data */
    struct dlistint_s *prev;    /* Pointer to the previous node */
    struct dlistint_s *next;    /* Pointer to the next node */
} dlistint_t;

/* Function prototype */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);




#endif /* LISTS_H */