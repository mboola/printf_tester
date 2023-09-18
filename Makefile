#VARIABLES
CC = cc
GCC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB = libftprintf.a
LIB_INSTRUCTION = -L. -lftprintf

TESTS_DIR = ./tests

TEST1_DIR = ${TESTS_DIR}/test1
TEST1_FILE = ${TEST1_DIR}/test1.c
OBJ_TEST1 = ${TEST1_FILE:.c=.o}
TEST1 = test1_exe
TEST1_USER_OUTPUT = ${TEST1_DIR}/test1_user_output.txt
TEST1_OK_OUTPUT = ${TEST1_DIR}/test1_ok_output.txt
TEST1_RESULT = ${TEST1_DIR}/test1_result.txt

TEST2_DIR = ${TESTS_DIR}/test2
TEST2_FILE = ${TEST2_DIR}/test2.c
OBJ_TEST2 = ${TEST2_FILE:.c=.o}
TEST2 = test2_exe
TEST2_USER_OUTPUT = ${TEST2_DIR}/test2_user_output.txt
TEST2_OK_OUTPUT = ${TEST2_DIR}/test2_ok_output.txt
TEST2_RESULT = ${TEST2_DIR}/test2_result.txt

TESTS_USER = ${TEST1_USER_OUTPUT} ${TEST2_USER_OUTPUT}
TESTS_EXE = ${TEST1} ${TEST2}
RESULTS = ${TEST1_RESULT} ${TEST2_RESULT}
OBJ = ${OBJ_TEST1} ${OBJ_TEST2}

BONUS_DIR = ./bonus
BONUS = ${BONUS_DIR}/bonus.c

#RULES

# how to compile the tests
%.o: %.c Makefile
	${CC} ${CFLAGS} -c $< -o $@

# compiles all tests with .a
all: ${TESTS_EXE}

# create the executable
${TEST1}: ${OBJ_TEST1}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${TEST2}: ${OBJ_TEST2}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}

# runs all tests
run: test1 test2 test3 test4

# runs first tests
test1: ${TEST1}
	./$< > ${TEST1_USER_OUTPUT}
	-diff -s ${TEST1_USER_OUTPUT} ${TEST1_OK_OUTPUT} > ${TEST1_RESULT}

test2: ${TEST2}
	./$< > ${TEST2_USER_OUTPUT}
	-diff -s ${TEST2_USER_OUTPUT} ${TEST2_OK_OUTPUT} > ${TEST2_RESULT}

# others
clean:
	rm -f ${OBJ}
	rm -f ${TESTS_USER}
	rm -f ${RESULTS}

fclean: clean
	rm -f ${TESTS_EXE}

display:
	cat ${TESTS_USER}

results:
	cat ${RESULTS}

.PHONY: all bonus run clean fclean test1 test2 test3 test4 display results
