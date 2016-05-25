


main(a,b,c,d,x,y,z,p,i)char *b[];{
	for(c=y=p=z=x=i=0;
			b[0][i]=='\n'?
			x=0,
			y++,
			z<2
			:z<2;
			i++,x++){
		printf("%i,%i\t",b[0][i],i);
		switch(b[0][i]){
			case '0':
			case 'v':
			case '^':
			case '<':
			case '>':
				if(!(p>30)) p=b[0][i];
				c=x,d=y,z++;

		}
	}
	--i;
	printf("%i,%i,%i,%i,%i,%i,%i,%i,%i",a,b,c,d,x,y,z,p,i);
	switch(p){
		case 'v':
			z=(c==x)*(b[1][i]=='0');
			break;
		case '^':
			z=(c==x)*(b[1][i]==p);
			break;
		case '<':
			z=(d==y)*(b[1][i]==p);
			break;
		case '>':
			z=(d==y)*(b[1][i]=='0');
			break;

	}

	/*printf("%i,%i,%i,%i,%i,%i,%i,%i",a,b,c,d,x,y,z,p);*/
	return z;
}
