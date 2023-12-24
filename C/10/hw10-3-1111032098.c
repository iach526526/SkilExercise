#include <stdio.h>
#define rCOUNT 3

int main()
{
	struct data
	{
		char name[10];
		int math;
	};
	struct data student[rCOUNT]={{"Jenn",96},{"Each",100},{"Ian",99}};
	FILE *outputF;
	outputF=fopen("student.bin","wb");
	fwrite(student,sizeof(struct data),rCOUNT,outputF);
	fclose(outputF);
	
	//¶}°_¨ÓÅª 
	struct data read[3];
	FILE *Rfile = fopen("student.bin", "rb");
	fread(read,sizeof(struct data),rCOUNT,Rfile);
	int i;
	for(i=0;i<rCOUNT;i++)
	{
		printf("%s:%d\n",read[i].name,read[i].math);
	}
	fclose(Rfile);
 } 
