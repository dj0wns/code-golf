#define k(l) r(o,l,x)
#define O o[1][l]
n,l,d,L;      /*-------------------------- Globals*/
k(l)char**o;{ /*-------------------------- Recursive Function*/
    if(!(l>L||l<0||O<47||O!=x)) /*-------- if this cell is valid(in
                                              range, is a number, is the 
                                              same as the parent number*/
    n++,     /*--------------------------- Increment count*/
    O++,     /*--------------------------- Increment character to mark*/
    k(l-1),  /*--------------------------- Recurse left*/
    k(l-d),  /*--------------------------- Recurse up*/
    k(l+1),  /*--------------------------- Recurse right*/
    k(l+d),  /*--------------------------- Recurse down*/
    n<3?O--:(O='x');  /*-------------------If greater than 3, replace with x, else decrement character*/ 
}          /*----------------------------- Return*/

main(g,o)char**o;{ /*--------------------- Main*/
    while(o[1][++d]>31); /*--------------- Find line width*/
    for(;l<(L=strlen(o[1]));l++){ /*------ For entire string and set L*/
        n=0;                      /*------ set counter to 0*/
        r(o,l,O); /*---------------------- Recurse*/
    } /*---------------------------------- End While*/
    puts(o[1]); /*------------------------ Print*/
} /*-------------------------------------- End*/
