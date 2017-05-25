/* v3a.c : stratchable arrays 
		Use walking pointers to copy data from old array to new array.
*/

# include <stdio.h>
# include <stdlib.h>

# define HUGE 20

int *nums;
int *old;

main ( ) {
	int n;
	int i;
	int j;
	int *src;
	int *dst;

	
	nums = (int *) malloc ( sizeof ( int ) );
	n = 0;

	while ( 1 ) {
		for ( j = 0; j < 10000 && j <= n; j++ )
			nums [ j ] = j;

		if ( n > 10000 )
			break;

		n++;
		old = nums;
		nums = ( int * ) malloc ( ( n + 1 )  * sizeof ( int ) );

		src = old;
		dst = nums;

		for ( i = 0; i < n; i++ )
		//	nums [ i ] = old [ i ];
			*dst++ = *src++;			// walking pointer
	}

	for ( i = 0; i < n; i++ )
		printf ("%d", nums [ i ] );
}
