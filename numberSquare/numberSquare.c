/*terms
//(1,2) l%100
//(3,4)	l/100
//(1,3) (l%10)+((l/100)%10*10)
//(2,4)	((l%100)/10) + (l%10)*10
*/

/*functions*/
/*score*/
/*(l/1000)+2*((l/100)%10)+3*((l%100)/10)+4*(l%10);*/
/*squareVal*/
/*l%100+l/100+(l%10)+((l/100)%10*10)+((l/1000)*10)+(l/10%10);*/

/*calc score method to be condensed*/
calcScore(l){
	return (l/1000)+2*((l/100)%10)+3*((l%100)/10)+4*(l%10);
}

main(g,o,l,f){
	g-=2;
	o=91;
	for(f=l=-1;l<10000;l++){
		if(g==l%100+l/100+(l%10)+((l/100)%10*10)+((l/1000)*10)+(l/10%10))
			if(calcScore(l)==o)f=-1;
		else if(calcScore(l)<o)f=l,o=calcScore(l);
	}
	printf("%i,%i,%i",f,o,g);
}
