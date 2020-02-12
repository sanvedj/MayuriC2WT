#include<stdio.h>

int main(void) {
	float dist;
	printf("Enter dist(KM) : ");
	scanf("%f", &dist);
	if(dist >= 0) {
		printf("dist(m) : %f", dist * 1000);
	} else {
		printf("Enter valid det.");
	}
	return 0;
}
