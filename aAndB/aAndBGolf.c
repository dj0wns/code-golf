l(b,i,j,k)char*b;{for(i=j=0;(k=b[i++])>0&k<=b[i];)j+=2*(k>97)-1;return !j;}

main(a,b)char**b;{
	printf("%d",l(b[1]));

}
