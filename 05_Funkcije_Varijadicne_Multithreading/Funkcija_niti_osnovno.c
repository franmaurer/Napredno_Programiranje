#include <stdio.h>
#include<string.h>
#include<pthread.h>
int i = 15;
void* func(void* p){
    printf("Value received as argument: ");
    printf("%i\n", *(int*)p);
    printf("Thread ID = %li\n", pthread_self());
    //Return adress to a global variable
    pthread_exit(&i);
}
int main()
{
    pthread_t id;
    int j = 12;
    pthread_create(&id, NULL, func, &j);
    int* ptr;
    pthread_join(id, (void**)&ptr);
    printf("Value received by parent from child: ");
    printf("%i", *ptr);
    return 0;
}
