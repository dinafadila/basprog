%% Membuat List 3 Elemen (Prolog) %%
program :- read(A), read(B), read(C) ,write([A,B,C]), nl.
:- program.

%% Length of List (Prolog) %%
program :- read(List), lengthh(List,N),write(N), nl.
 
lengthh([],1).
lengthh([H|T],N):- length(T,N1), N is N1+1.
 
:- program.


%% Anggota Terakhir (Prolog) %%
program :- read(List), last(List,N), write(N), nl.
last([],0).
last([H|[]],H).
last([_|T],X) :- last(T,X).
:- program.

%% Product of List (Prolog) %%
program :- read(List), jumlah(List,N), write(N), nl.
jumlah([],1) :- !.
jumlah([H|T],X) :- jumlah(T,Y), X is H*Y.
:- program.
