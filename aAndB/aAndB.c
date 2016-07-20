l(b,i,j)char*b;{
	for(i=j=0;b[i]>0;i++)j+=2*(b[++i]<98)-1;
	return !j;
}

main(a,b)char**b;{
	printf("%d",l(b[1]));

}
