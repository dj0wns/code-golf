#define l b[1][i]
#define C case 
main(a,b,c,d,x,y,z,p,i)char *b[];{
	for(c=y=p=z=i=0,x=1;z<2 && (l=='\n'?x=0,y++,1:1);i++,x++){
		switch(l){
		C'0':C'v':C'^':C'<':C'>':if(p<50)p=l;if(!z)c=x,d=y;z++;
		}
	}
	i--;x--;
	z=0;
	switch(p){
		C'v':
			z=(c==x)*(l=='0');
			break;
		C'^':
			z=(c==x)*(l==p);
			break;
		C'<':
			z=(d==y)*(l==p);
			break;
		C'>':
			z=(d==y)*(l=='0');
			break;

	}
	return z;
}
