/*************************************************************************
  > File Name: test.c
  > Author: Sues
  > Mail: sumory.kaka@foxmail.com 
  > Created Time: Mon 30 Apr 2018 06:27:14 AM PDT
 ************************************************************************/

#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>

void* fun1(void *arg)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("fun1 %d\n",i);
        sleep(1);

    }
    printf("this is thread1:%lu\n",pthread_self());
    pthread_exit(NULL);
    return NULL;

}

void* fun2(void *arg)
{
    int i;
    for( i=0;i<10;i++ )
    {
        printf("fun2 %d\n",i);
        sleep(1);

    }
    printf("this is thread2:%lu\n",pthread_self());
    pthread_exit(NULL);
    return 0;

}

int main()
{
    printf("this is main:%lu\n",pthread_self());
    pthread_t tid1,tid2;
    pthread_create(&tid1,NULL,fun1,NULL);
    pthread_create(&tid2,NULL,fun2,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    return 0;

}
