#include<process_copy.h>

int check_pram(int argc,char *src_file,int pronum)
{
	if(argc<=4)
	{
		int jd=access(src_file,F_OK);
		printf("%d",jd);
		if(jd!=0) 	return -1;
		if(pronum<5||pronum>100) 	return -2;
	}
	else
		return -3;
	return 1;
}
