#include <stdio.h>

int main(){ 
	float ipk;
	
	printf("Input your IPK: ");
	scanf("%f",&ipk);
	
	if (ipk >= 3.5 && ipk <= 4.0) {
        printf("Cumlaude\n");
    } else if (ipk >= 3.0 && ipk < 3.5) {
        printf("Outstanding\n");
    } else if (ipk >= 2.5 && ipk < 3.0) {
        printf("Very Good\n");
    } else if (ipk >= 2.0 && ipk < 2.5) {
        printf("Good\n");
    } else {
        printf("Poor\n");
    }
	
	return 0;
}
