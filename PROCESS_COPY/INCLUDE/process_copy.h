#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<math.h>

int check_pram(int argc,char *src_file,int pronum);

int process_block_cur(char *src_file,int pronum);

int process_create(char *src_file,char *dest_file,int pronum,int blockSize);

int process_wait();
