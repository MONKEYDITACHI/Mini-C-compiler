a.out: lex.yy.o y.tab.o ass5_15CS10025_translator.o  
	g++ lex.yy.o y.tab.o ass5_15CS10025_translator.o -lfl
lex.yy.o: lex.yy.c y.tab.c
	g++ -c lex.yy.c
lex.yy.c: ass5_15CS10025.l
	flex ass5_15CS10025.l
y.tab.o: y.tab.c
	g++ -c y.tab.c
y.tab.c: ass5_15CS10025.y
	yacc -dtv ass5_15CS10025.y
ass5_15CS10025_translator.o: ass5_15CS10025_translator.cxx
	g++ -c ass5_15CS10025_translator.cxx

run1: a.out ass5_15CS10025_test1.mm 
	./a.out < ass5_15CS10025_test1.mm > ass5_15CS10025_1.s
	gcc -m32 ass5_15CS10025_1.s myl.c -o 1.out
	./1.out

run2: a.out ass5_15CS10025_test2.mm
	./a.out < ass5_15CS10025_test2.mm > ass5_15CS10025_2.s
	gcc -m32 ass5_15CS10025_2.s myl.c -o 2.out
	./2.out

run3: a.out ass5_15CS10025_test3.mm
	./a.out < ass5_15CS10025_test3.mm > ass5_15CS10025_3.s
	gcc -m32 ass5_15CS10025_3.s myl.c -o 3.out
	./3.out

run4: a.out ass5_15CS10025_test4.mm
	./a.out < ass5_15CS10025_test4.mm > ass5_15CS10025_4.s
	gcc -m32 ass5_15CS10025_4.s myl.c -o 4.out
	./4.out

run5: a.out ass5_15CS10025_test5.mm
	./a.out < ass5_15CS10025_test5.mm > ass5_15CS10025_5.s
	gcc -m32 ass5_15CS10025_5.s myl.c -o 5.out
	./5.out
	
run6: ass5_15CS10025_6.s
	gcc ass5_15CS10025_6.s myl.c -o 6.out
	./6.out
	
run7: a.out ass5_15CS10025_test7.mm
	./a.out < ass5_15CS10025_test7.mm > ass5_15CS10025_7.s
	gcc -m32 ass5_15CS10025_7.s myl.c -o 7.out
	./7.out
	
clean:
	rm a.out ass5_15CS10025_translator.o lex.yy.o y.tab.o y.tab.c lex.yy.c y.tab.h 1.out 2.out 3.out 4.out 5.out
