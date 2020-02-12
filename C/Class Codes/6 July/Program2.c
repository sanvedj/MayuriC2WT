#include<stdio.h>

struct record {

	int a;
	int b;
};

void main() {

	int count;
	struct record r;
	FILE *fp;
	
	fp=fopen("abc.bin","rb");
	
	if(!fp) {
		printf("\nUnable to open file");
		exit(0);
	} else {
	
		for(int i=0;i<=50	;i++) {
			
			fread(&r,sizeof(struct record),1,fp);
			printf("%d: %d\n",i,r.a);
		}
		
		fclose(fp);
	} 

}
