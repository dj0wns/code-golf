i,y,x;main(g,o,p)char**o;{p=(o[1][0]=='t');while(o[2][++i]!='\n');p?y=(strlen(o[2])-1)/i:(x=i);do do printf("%c",o[2][x+y*i]);while(p?++x<i:x-->0);while(p?x=0,y--:++y<(x=i-1,strlen(o[2])/i));}
