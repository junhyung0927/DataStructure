#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "queue.h"

int main(void)
{
    int minutes = 60;
    int total_wait = 0;
    int total_customers = 0;
    int service_time = 0;
    int service_customer;
    QueueType queue;
    init_queue(&queue);

    srand(time(NULL));
    for (int clock = 0; clock < minutes; clock++) {
        printf("����ð�=%d\n", clock);
        if ((rand() % 10) < 3) {
            element customer;
            customer.id = total_customers++;
            customer.arrival_time = clock;
            customer.service_time = rand() % 3 + 1;
            enqueue(&queue, customer);
            printf("�� %d�� %d�п� ���ɴϴ�. ����ó���ð�= %d��\n",
                   customer.id, customer.arrival_time, customer.service_time);
        }
        if (service_time > 0) {
            printf("�� %d ����ó�����Դϴ�. \n", service_customer);
            service_time--;
        }
        else {
            if (!is_empty(&queue)) {
                element customer = dequeue(&queue);
                service_customer = customer.id;
                service_time = customer.service_time;
                printf("�� %d�� %d�п� ������ �����մϴ�. ���ð��� %d���̾����ϴ�.\n",
                       customer.id, clock, clock - customer.arrival_time);
                total_wait += clock - customer.arrival_time;
            }
        }
    }
    printf("��ü ��� �ð�=%d�� \n", total_wait);
    return 0;

}