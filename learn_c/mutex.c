#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define COUNT_TO 1000000000
#define MAX_CORES 12

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

long long i = 0;

void *start_counting(void *arg) 
{
    for(;;) {
        // acquire lock
        pthread_mutex_lock(&mutex);

        long long* wasted_memory = malloc(sizeof(long long)*10000000);
        
        // check if all COUNT_TO has been arrived at
        if (i >= COUNT_TO)
        {
            pthread_mutex_unlock(&mutex);
            return NULL;
        }

        ++i;
        printf("i = %lld\n", i);

        // release lock
        pthread_mutex_unlock(&mutex);
        
    }
}

int main(int argc, char** argv)
{
    int i = 0;

    // create a thread group the size of MAX_CORES
    pthread_t *thread_group = malloc(sizeof(pthread_t) * MAX_CORES);

    // start all threads to begin work
    for ( i = 0; i < MAX_CORES; ++i)
    {
        pthread_create(&thread_group[i], NULL, start_counting, NULL);
    }

    for ( i = 0; i < MAX_CORES; ++i)
    {
        pthread_join(thread_group[i], NULL);
    }

    return EXIT_SUCCESS;
}
