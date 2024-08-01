#include<process_copy.h>
int process_create(char*src_file,char*dest_file,int pronum,int blockSize)
{
	pid_t pid=-1;
	int i=0;
	for(i;i<pronum;i++)
	{
		pid=fork();
		if(pid==0)
		{
			break;
		}
	}
	if(pid>0)
	{
		printf("father pid:%d\n",getpid());
		sleep(2);
		process_wait();
	}
	else if(pid==0)
	{
		char buf1[20];
		char buf2[20];
		snprintf(buf1,sizeof(buf1)-1,"%d",blockSize);
		snprintf(buf2,sizeof(buf2)-1,"%d",i*blockSize);
		printf("%s\n",buf2);
		execl("../MOD/copy","copy",src_file,dest_file,buf1,buf2,NULL);
		printf("success to copy\n");
	}
	else
	{
		perror("fork error\n");
		exit(0);
	}
	printf("copy end\n");
	return 0;

}
