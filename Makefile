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

TEST3_DIR = ${TESTS_DIR}/test3
TEST3_FILE = ${TEST3_DIR}/test3.c
OBJ_TEST3 = ${TEST3_FILE:.c=.o}
TEST3 = test3_exe
TEST3_USER_OUTPUT = ${TEST3_DIR}/test3_user_output.txt
TEST3_OK_OUTPUT = ${TEST3_DIR}/test3_ok_output.txt
TEST3_RESULT = ${TEST3_DIR}/test3_result.txt

BONUS_DIR = ./bonus

BONUS1_DIR = ${BONUS_DIR}/bonus1
BONUS1_FILE = ${BONUS1_DIR}/bonus1.c
OBJ1_BONUS = ${BONUS1_FILE:.c=.o}
BONUS1 = bonus1_exe
BONUS1_USER_OUTPUT = ${BONUS1_DIR}/bonus1_user_output.txt
BONUS1_OK_OUTPUT = ${BONUS1_DIR}/bonus1_ok_output.txt
BONUS1_RESULT = ${BONUS1_DIR}/bonus1_result.txt

BONUS2_DIR = ${BONUS_DIR}/bonus2
BONUS2_FILE = ${BONUS2_DIR}/bonus2.c
OBJ2_BONUS = ${BONUS2_FILE:.c=.o}
BONUS2 = bonus2_exe
BONUS2_USER_OUTPUT = ${BONUS2_DIR}/bonus2_user_output.txt
BONUS2_OK_OUTPUT = ${BONUS2_DIR}/bonus2_ok_output.txt
BONUS2_RESULT = ${BONUS2_DIR}/bonus2_result.txt

TESTS_USER = ${TEST1_USER_OUTPUT} ${TEST2_USER_OUTPUT} ${TEST3_USER_OUTPUT} ${BONUS1_USER_OUTPUT} ${BONUS2_USER_OUTPUT}
TESTS_EXE = ${TEST1} ${TEST2} ${TEST3} ${BONUS1} ${BONUS2}
RESULTS = ${TEST1_RESULT} ${TEST2_RESULT} ${TEST3_RESULT} ${BONUS1_RESULT} ${BONUS2_RESULT}
OBJ = ${OBJ_TEST1} ${OBJ_TEST2} ${OBJ_TEST3} ${OBJ1_BONUS} ${OBJ2_BONUS}

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
${TEST3}: ${OBJ_TEST3}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS1}: ${OBJ1_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS2}: ${OBJ2_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
# runs all tests
run: test1 test2 test3 bonus1 bonus2

# runs first tests
test1: ${TEST1}
	./$< > ${TEST1_USER_OUTPUT}
	-diff -s ${TEST1_USER_OUTPUT} ${TEST1_OK_OUTPUT} > ${TEST1_RESULT}

test2: ${TEST2}
	./$< > ${TEST2_USER_OUTPUT}
	-diff -s ${TEST2_USER_OUTPUT} ${TEST2_OK_OUTPUT} > ${TEST2_RESULT}

test3: ${TEST3}
	./$< > ${TEST3_USER_OUTPUT}
	-diff -s ${TEST3_USER_OUTPUT} ${TEST3_OK_OUTPUT} > ${TEST3_RESULT}

bonus1: ${BONUS1}
	./$< > ${BONUS1_USER_OUTPUT}
	-diff -s ${BONUS1_USER_OUTPUT} ${BONUS1_OK_OUTPUT} > ${BONUS1_RESULT}

bonus2: ${BONUS2}
	./$< > ${BONUS2_USER_OUTPUT}
	-diff -s ${BONUS2_USER_OUTPUT} ${BONUS2_OK_OUTPUT} > ${BONUS2_RESULT}

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

.PHONY: all bonus run clean fclean test1 test2 test3 display results
