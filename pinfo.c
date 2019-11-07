#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

struct proc_stat{
  int pid;
  int run_time;
  int num_run;
  int current_queue;
  int ticks[5];
};

int
main(int argc, char *argv[])
{
	// int pid = 0;
	// if(argc !=1)	atoi(argv[1]);
	printf(1,"In main\n");
	struct proc_stat* curproc=(struct proc_stat*)(malloc(sizeof(struct proc_stat*)*1));
	printf(1,"allocated resources\n");
	// curproc->pid = 0;
	// printf(1,"---\n");
	// curproc->run_time = 0;
	// printf(1,"---\n");
	// curproc->num_run = 0;
	// printf(1,"---\n");
	// curproc->current_queue = 0;
	// for(int i=0;i<5;++i)	curproc->ticks[i] = 0;
 //  	printf(1,"assigned values\n");
  	getpinfo(curproc);
  	// printf(1,"PID : %d\n",curproc->pid);
   //  printf(1,"Runtime : %d\n",curproc->run_time);
   //  printf(1,"Number of times process in RUNNING state : %d\n",curproc->num_run);
   //  printf(1,"Current Queue Number : %d\n",curproc->current_queue);
        
    // for(int i=0;i<5;++i) printf(1,"Ticks in queue %d : %d\n",i,curproc->pid); 

  	return 0;
}