char c[11],d[11], p[99] = " %s\n%0s\n+%0s\n %s\n%0i", *t,*b;
k,r;
main(a,i,m,n)char**i;{
	m=strlen(i[1]);
	n=strlen(i[2]);
 	/*set fill amount*/
	p[18]=p[5]=1+(p[10]=48+(n>m?n:m));
	/*find larger num*/
	if(m==n){
		strcmp(i[1],i[2])<0?t=i[2],b=i[1]:(t=i[1],b=i[2]);
	}else{
		m<n?t=i[2],b=i[1]:(t=i[1],b=i[2]);

	}
	for(;k<(n>m?n:m);){
		d[k]=45;
		a=(n-++k>=0)*(i[2][(n-k)]-48)+(m-k>=0)*(i[1][(m-k)]-48);
		r+=a*pow(10.,(float)k-1);
		c[(n>m?n:m)-k-1]=32+(a+c[(n>m?n:m)-k]%2>9)*17;
	}
	/*print carry, topnum, botnum, dashes, answer*/
	printf(p,c,t,b,d,r);	
}
