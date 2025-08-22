tests:
	clang -std=c99 -Wall -Werror  ./test/${name}_test.c *.c ./test/tests.c -o ${name}_test && \
		valgrind --leak-check=full ./${name}_test && rm ./${name}_test
