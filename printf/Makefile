a.out: main.c printf.h stdarg.h
	gcc -o 	a.out main.c

debug: 
	gcc -g -o a.out main.c
	gdb a.out

pretreatement:
	gcc -E -DPRE_C main.c