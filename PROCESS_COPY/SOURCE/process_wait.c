#include<process_copy.h>

int process_wait()
{
	pid_t zpid;
	while((zpid==waitpid(-1,NULL,WNOHANG))&&zpid!=-1)
	{
		if(zpid>0)
		{
			printf("waitpid success\n");
		}
	}
	return 0;
}
