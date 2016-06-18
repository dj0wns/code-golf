#include <omp.h>
n[4], a[4];
main(t){
	gettimeofday(n);
	t=n[0];
	omp_set_num_threads(9);
	
	#pragma omp parallel
	while(gettimeofday(n),n[0]-9<t);
	gettimeofday(n);
	times(a);
	printf("%d,%f",n[0],n[0]-t);
}
