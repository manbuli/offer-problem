#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	if(argc < 3)
	{
		printf("Usage %s num method\n",argv[0]);
		return -1;
	}

	//unsigned int val = atoi(argv[1]);
	unsigned int val = strtol(argv[1],NULL,10);
	printf("Value is %x\n",val );
	printf("Method is %d\n",atoi(argv[2]));


	if(1 == atoi(argv[2]))
	{
		int count = 0;
		int tmp = val;
		while(tmp)
		{
			tmp = tmp & (tmp -1);
			count++;
		}

		printf("Value %d ===> %s [%d]\n", val,argv[0],count);
	}
	else
	{
		unsigned char tmp = (unsigned char)val;
		if(tmp & 0x01)
			tmp = (tmp ^ 0x01 ) + 1;
		if(tmp & 0x02)
			tmp = (tmp ^ 0x02 ) + 1;
		if(tmp & 0x04)
			tmp = (tmp ^ 0x04 ) + 1;
		if(tmp & 0x08)
			tmp = (tmp ^ 0x08 ) + 1;
		if(tmp & 0x10)
			tmp = (tmp ^ 0x10 ) + 1;
		if(tmp & 0x20)
			tmp = (tmp ^ 0x20 ) + 1;
		if(tmp & 0x40)
			tmp = (tmp ^ 0x40 ) + 1;
		if(tmp & 0x80)
			tmp = (tmp ^ 0x80 ) + 1;

		printf("Two Value %d ===> %s [%d]\n", val,argv[0],tmp);

	}
	return 0;
}
