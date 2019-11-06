#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//400000000
//4000000000
int
main(int argc, char *argv[])
{
  dofoo();

  float x = 0;

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
			wait();
		}
		else
		{
			printf(1,"Child created\n");
			for(int z=0;z<2100000;z += 1)
			{
				x = x+1200.6*14848.3;
				x = x*x;
				x = 0;
			}
			printf(1,"Child %d finished computation\n",getpid());
			break;
		}
	}

  exit();
}