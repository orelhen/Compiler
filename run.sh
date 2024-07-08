lex scanner.l
bison parser.y
yacc parser.y
cc -o run y.tab.c -ll -Ly
./run < text.t