#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct cell_s{
    int val;
    struct cell_s *next;
};
typedef struct cell_s cell;

struct queue_s{
    cell *head;
    cell *tail;
};
typedef struct queue_s queue;

queue 
*snake(void){
    queue *q = malloc(sizeof(queue));
    q->head = NULL;
    q->tail = NULL;
    return q;
}

void 
add (queue *q, int x){

    cell *new = malloc(sizeof(cell));
    new->val = x;
    new->next = NULL;

    if(q->head == NULL){
        q->head = new;
    } else {
        q->tail->next = new;
        
    }
    q->tail = new;
}


void 
drawMap(int n, int p){
    
    for(int i = 0 ; i<n; i++ ){
        for(int j = 0 ; j<p ; j++){

            if(i== 0|| i== n-1 || j == 0 || j == p-1){
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int 
main(void){
    bool game_running = true;
    
    int l = 10 ,p = 20;

    drawMap(l,p);
    
    
    
}
