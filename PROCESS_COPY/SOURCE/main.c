#include<process_copy.h>
int main(int argc,char*argv[])
{
	//1
	int pronum=5;
	if(argc!=3) pronum=atoi(argv[3]);
	
	int err=check_pram(argc,argv[1],pronum);
	if(err!=1){
		perror("check_pram error\n");
		printf("%d\n",err);
		exit(0);
	}
	//2
	int blockSize=process_block_cur(argv[1],pronum);
	if(-1==blockSize)
	{
		printf("fenQu error\n");
		exit(0);
	}
	//3
	process_create(argv[1],argv[2],pronum,blockSize);
	return 0;
}
