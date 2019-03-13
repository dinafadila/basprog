//--------------- tampilkan list genap----------------------
program :- read(List), genap(List,N), write(N), nl.
genap([],[]) :- !.
genap([H|T],[H|B]) :- X is H mod 2, X =:= 0, genap(T,B).
genap([H|T],B) :- X is H mod 2, X =\= 0, genap(T,B).
:- program.


//--------------- tampilkan list ganjil-------------------
program :- read(List), ganjil(List,N), write(N), nl.
ganjil([],[]) :- !.
ganjil([H|T],[H|B]) :- X is H mod 2, X =\= 0, genap(T,B).
ganjil([H|T],B) :- X is H mod 2, X =:= 0, genap(T,B).
:- program.

//----------------- penjumlahan list genap ----------------------
program :- read(List), genap(List,N), write(N), nl.
genap([],0) :- !.
genap([H|T],X) :- A is H mod 2, A =:= 0, genap(T,Y), X is H+Y.
genap([H|T],B) :- A is H mod 2, A =\= 0, genap(T,B).
:- program.

//-----------------panjang list--------------------------
program :- read(List), len(List,N), write(N), nl.
len([],0) :- !.
len([_|T],X) :- len(T,Y), X is Y+1.
:- program.


//-------------- penggandaan list----------------------
program :- read(List), mul(List,Last), write(Last), nl.
mul([],[]) :- !.
mul([_,0],[]) :- !.
mul([H,1],[H]) :- !.
mul([H|N],[H|Y]) :- N1 is N-1, mul([H,N1],Y).
:- program.

//-------------- 
