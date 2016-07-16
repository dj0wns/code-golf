#define O o[1][l]
x,n,l,L;      /*-------------------------- Globals*/
r(o,l)char**o;{ /*------------------------ Recursive Function*/
    if(!(l>L|l<0|O<47|O!=x)) /*----------- if this cell is valid(in
                                              range, is a number, is the 
                                              same as the parent number*/
    n++,     /*--------------------------- Increment count*/
    O++,     /*--------------------------- Increment character to mark*/
    r(o,l-1),  /*------------------------- Recurse left*/
    r(o,l+6),  /*------------------------- Recurse down*/
    r(o,l+1),  /*------------------------- Recurse right*/
    n>2?O='x':O--;  /*---------------------If greater than 3, replace with x, else decrement character*/ 
}          /*----------------------------- Return*/

main(g,o)char**o;{ /*--------------------- Main*/
    for(;l<(L=30);l++){ /*---------------- For entire string and set L*/
        n=0;
		x=O;		/*-------------------- set counter to 0*/
        r(o,l); /*------------------------ Recurse*/
    } /*---------------------------------- End While*/
    puts(o[1]); /*------------------------ Print*/
} /*-------------------------------------- End*/
