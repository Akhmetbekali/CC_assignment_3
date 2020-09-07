bison -d oberon.y
flex oberon.l
gcc lex.yy.c oberon.tab.c -o test -lfl
./test prog.obn