// linked list implementation

#include <stdio.h>

struct task
{
    char taskname[100];
    int priority;
    struct task* nexttask;
};

typedef struct task task;


void inserttask();  // ankush

void completetask(); // saanvi
 
void showtask(task* headptr){
    task* temp = headptr  ;
    while (temp->nexttask!=NULL)
    {
        
        puts(temp->taskname);
    }
    

} //shivam

void prioritytask(); // ravi

