#define O o[1][l]
x,n,l,L;r(o,l)char**o;{if(!(l>L|l<0|O<47|O!=x))n++,O++,r(o,l-1),r(o,l+6),r(o,l+1),n>2?O='x':O--;}main(g,o)char**o;{for(;(L=30)>l;l++)n=0,x=O,r(o,l);puts(o[1]);}
