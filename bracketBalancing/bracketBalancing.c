//s = square
//c = curly
//p = paren
/*
int test(char* s){
	int a[265]={['[']=0,['{']=0,['(']=0};
	for(int i=0;s[i]!=0;i++){
		if((s[i]=='{'&a['(']>0)|(s[i]=='['&(a['(']>0|a['{']>0))|(s[i]==']'&(a['(']>0|a['{']>0))|(s[i]=='}'&a['(']>0))return 0;
		a[s[i]]++;
		a[s[i]-(s[i]/90+1)]--;
	}
	return a['[']==0&a['{']==0& a['(']==0;
}
*/

//golfVersion
#define S s[i]

t(s,i)char* s;{int a[]={['[']=0,['{']=0,['(']=0};for(i=0;S*!(S=='{'&a['(']|S=='['&(a['(']|a['{'])|S==']'&(a['(']|a['{'])|S=='}'&a['(']);i++)a[S]++,a[S-S/90-1]--;return !(a['[']+a['{']+a['(']);}




int main(int argc, char ** argv){
	int result = t(argv[1]);
	if(result){
		printf("Valid\n");
	} else {
		printf("Invalid\n");
	}
	return 0;
}

