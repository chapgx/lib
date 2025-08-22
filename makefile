test:
	clang -std=c99 -Wall -Werror  ./tests/${name}_test.c *.c ./tests/tests.c -o ${name}_test && \
		valgrind --leak-check=full ./${name}_test && rm ./${name}_test
