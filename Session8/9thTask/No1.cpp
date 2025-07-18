#include <stdio.h>

int main(){
	int n;
	for(;;) {
    printf("\n Enter integer : ");
    scanf("%d", &n);

    if((n % 2) == 0) continue;       
    else if((n % 3) == 0) break;      
    printf("\n\t Bottom of loop."); 
}
printf("\n\t Outside of loop.");

}

/* output yang keluar pada saat input 7,4,9 secara berurutan adalah berikut 

 Enter integer : 7
    Bottom of loop.

 Enter integer : 4

 Enter integer : 9
	Outside of loop.
	*/

