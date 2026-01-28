#include<stdio.h>
#define Buffer_size 5
typedef struct{
    int data[Buffer_size];
    int head;
    int tail;
    int count;
}CircularBuffer;

void cb_init(CircularBuffer* cb){
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}

void cb_push(CircularBuffer* cb, int x){
    cb->data[cb->head] = x;
    cb->head = (cb->head + 1) % Buffer_size;
    
    if(cb->count == Buffer_size){
        cb->tail = (cb->tail + 1) % Buffer_size;
    }
    else{
        cb->count++;
    }
}

void cb_print(const CircularBuffer* cb){
    int index = cb->tail;
    for(int i = 0; i<cb->count;i++){
        printf("%d ", cb->data[index]);
        index = (index + 1 ) % Buffer_size;
    }
    printf("\n");
}

int is_full(const CircularBuffer* cb){
    return cb->count == Buffer_size;
}

int is_empty(const CircularBuffer* cb){
    return cb->count == 0;
}

void cb_clear(CircularBuffer* cb){
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}



int main(){
    CircularBuffer cb;
    cb_init(&cb);
    for(int i = 0; i <= 7; i++){
        cb_push(&cb, i);
        cb_print(&cb);
    }
    
    return 0;
}