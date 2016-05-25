#define l b[1][i]
main(i,b,c,d,x,y,z,p)char **b;{
	for(y=z=i=0,x=1;z<2&&(l==10?x=0,++y:1);i++,x++)
		if(l>46){if(l!=79)p=l;if(!z++)c=x,d=y;}
	i--;x--;
	z=(c==x)*((p=='v')*(l==79)+(p==94)*(l==p))+(d==y)*((p==60)*(l==p)+(p==62)*(l==79));
	printf("%i\n",z);
	return z;
}
