#define k(l) r(o,l,x)
#define O o[1][l]
n,l,d,L;k(l)char**o;{if(!(l>L||l<0||O<47||O!=x))n++,O++,k(l-1),k(l-d),k(l+1),k(l+d),n<3?O--:(O='x');}main(g,o)char**o;{while(o[1][++d]>31);for(;l<(L=strlen(o[1]));l++)n=0,r(o,l,O);puts(o[1]);}
