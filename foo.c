#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  dofoo();

  for(int i=0;i<3;++i)
	{
		int id = fork();
		if(id < 0)	
		{	
			printf(1,"failed in fork()\n");
		}
		else if(id > 0)
		{
			printf(1,"Parent creating child %d\n",id);
			fflush(stdout);
			for(int z=0;z<400000000;++z)
			{
				float x = x+1200.6*14848.3;
				x = x*x;
			}
			wait();
		}
		else
		{
			printf(1,"Child created\n");
			fflush(stdout);
			for(int z=0;z<400000000;++z)
			{
				float x = x+1200.6*14848.3;
				x = x*x;
			}
			printf(1,"Child %d finished computation\n",getpid());
			fflush(stdout);
			break;
		}
	}

  exit();
}