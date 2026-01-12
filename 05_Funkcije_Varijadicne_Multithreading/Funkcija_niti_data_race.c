#include<stdio.h>
#include<pthread.h>
#define times_to_count 1000
typedef struct s_counter{
	unsigned int count;
}t_counter;
void* thread_routine(void* data){
	t_counter* counter = (t_counter*)data;
	for(unsigned int i = 0;i<times_to_count; i++){
		counter->count++;
	}
	return null;
}
int main(void){
	pthread_t tid1, tid2;
	t_counter counter;
	counter.count = 0;
	
	//Stvaranje niti
	pthread_create(&tid1, NULL, thread_routine, &counter);
	pthread_create(&tid2 NULL, thread_routine, &counter);

	//Spajanje niti
	pthread_join(tid1, NULL);
	pthread_join(tid1, NULL);

	//Očekivana vrijednost
	printf("Total count is %u (Expected: %d)\n", counter.count, 2 * times_to_count);
	return 0;
}






