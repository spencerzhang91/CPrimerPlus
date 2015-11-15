/* mall.c -- use queue interface */
#include <stdio.h>
#include <stdlib.h>                     // provide prototype for rand() & srand()
#include <time.h>                       // provide prototype for time()
#include "queue.h"                      // modify Item typedef
#define MIN_PER_HR 60.0

bool newcustomer(double x);             // is there any new customers?
Item customertime(long when);           // set customer arguments

int main(void)
{
    Queue line;
    Item temp;                          // temperary data of customer
    int hours;                          // simulation hours
    int perhour;                        // average customer per hour
    long cycle, cyclelimit;             // loop counter & counter upper limit
    long turnaways = 0;                 // rejected customers due to full queue
    long customers = 0;                 // customers added into queue
    long served = 0;                    // served customers during simulation
    long sum_line = 0;                  // accumulated line length
    int wait_time = 0;                  // time from now on till Sigmund is availabe
    double min_per_cust;                // average time elapsed before new customer shows up
    long line_wait = 0;                 // accumulated waiting time
    
    InitializeQueue(&line);
    srand(time(0));                     // randomly initialize rand() function
    puts("Case Study: Sigmund Lander's Advice Booth");
    puts("Enter the number of simulation hours: ");
    scanf("%d", &hours);
    cyclelimit = MIN_PER_HR * hours;
    puts("Enter the average number of customer per hour: ");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;
    
    for (cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (QueueIsFull(&line))
                turnaways += 1;
            else
            {
                customers += 1;
                temp = customertime(cycle);
                printf("temp.processtime: %d\n", temp.processtime);
                EnQueue(temp, &line);
            }
        }
    
        if (wait_time <= 0 && !QueueIsEmpty(&line))
        {
            DeQueue(&temp, &line);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrive;
            served += 1;
        }
        
        if (wait_time > 0)
            wait_time -= 1;
        
        sum_line += QueueItemCount(&line);
        printf("sum_line: %d\n", QueueItemCount(&line));
    }
    
    if (customers > 0)
    {
        printf("customers accepted: %ld\n", customers);
        printf("  customers served: %ld\n", served);
        printf("         turnaways: %ld\n", turnaways);
        printf("average queue size: %.2f\n",
              (double)sum_line / cyclelimit);
        printf(" average wait time: %.2f minutes\n",
              (double)line_wait / served);
    }
    else
        puts("No customers!");
    EmptyTheQueue(&line);
    puts("Bye!");
    
    return 0;    
}

/* x is average interval of new coming customer */
/* if a new customer shows up within this minute, return true */
bool newcustomer(double x)
{
    if (rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

Item customertime(long when)
{
    Item cust;
    cust.processtime = (rand()%3+1);
    cust.arrive = when;

    return cust;
}

