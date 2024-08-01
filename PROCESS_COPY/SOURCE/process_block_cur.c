#include<process_copy.h>

int process_block_cur(char *src_file,int pronum)
{
	int fd=open(src_file,O_RDONLY);
	
	int size=lseek(fd,0,SEEK_END);
	close(fd);
	int num=size/pronum+1;
	return num;
}

