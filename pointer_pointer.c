#include <stdio.h>

int main(void) {

	int num = 1;

	int *num_p;
	int **num_pp;
	int ***num_ppp;
	int ****num_pppp;
	int *****num_ppppp;
	int ******num_pppppp;
	int *******num_ppppppp;
	int ********num_pppppppp;
	int *********num_ppppppppp;
	int **********num_pppppppppp;
	
	num_p = &num;
	num_pp = &num_p;
	num_ppp = &num_pp;
	num_pppp = &num_ppp;
	num_ppppp = &num_pppp;
	num_pppppp = &num_ppppp;
	num_ppppppp = &num_pppppp;
	num_pppppppp = &num_ppppppp;
	num_ppppppppp = &num_pppppppp;
	num_pppppppppp = &num_ppppppppp;
	
	**********num_pppppppppp = 9;
	
	printf("num = %d\n", num);
	printf("*num_p = %d\n", *num_p);
	printf("**num_pp = %d\n", **num_pp);
	printf("***num_ppp = %d\n", ***num_ppp);
	printf("****num_pppp = %d\n", ****num_pppp);
	printf("*****num_ppppp = %d\n", *****num_ppppp);
	printf("******num_pppppp = %d\n", ******num_pppppp);
	printf("*******num_ppppppp = %d\n", *******num_ppppppp);
	printf("********num_pppppppp = %d\n", ********num_pppppppp);
	printf("*********num_ppppppppp = %d\n", *********num_ppppppppp);
	printf("**********num_pppppppppp = %d\n", **********num_pppppppppp);

	return 0;
}
