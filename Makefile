#VARIABLES
CC = cc
GCC = gcc
CFLAGS =
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

BONUS3_DIR = ${BONUS_DIR}/bonus3
BONUS3_FILE = ${BONUS3_DIR}/bonus3.c
OBJ3_BONUS = ${BONUS3_FILE:.c=.o}
BONUS3 = bonus3_exe
BONUS3_USER_OUTPUT = ${BONUS3_DIR}/bonus3_user_output.txt
BONUS3_OK_OUTPUT = ${BONUS3_DIR}/bonus3_ok_output.txt
BONUS3_RESULT = ${BONUS3_DIR}/bonus3_result.txt

BONUS4_DIR = ${BONUS_DIR}/bonus4
BONUS4_FILE = ${BONUS4_DIR}/bonus4.c
OBJ4_BONUS = ${BONUS4_FILE:.c=.o}
BONUS4 = bonus4_exe
BONUS4_USER_OUTPUT = ${BONUS4_DIR}/bonus4_user_output.txt
BONUS4_OK_OUTPUT = ${BONUS4_DIR}/bonus4_ok_output.txt
BONUS4_RESULT = ${BONUS4_DIR}/bonus4_result.txt

BONUS5_DIR = ${BONUS_DIR}/bonus5
BONUS5_FILE = ${BONUS5_DIR}/bonus5.c
OBJ5_BONUS = ${BONUS5_FILE:.c=.o}
BONUS5 = bonus5_exe
BONUS5_USER_OUTPUT = ${BONUS5_DIR}/bonus5_user_output.txt
BONUS5_OK_OUTPUT = ${BONUS5_DIR}/bonus5_ok_output.txt
BONUS5_RESULT = ${BONUS5_DIR}/bonus5_result.txt

BONUS6_DIR = ${BONUS_DIR}/bonus6
BONUS6_FILE = ${BONUS6_DIR}/bonus6.c
OBJ6_BONUS = ${BONUS6_FILE:.c=.o}
BONUS6 = bonus6_exe
BONUS6_USER_OUTPUT = ${BONUS6_DIR}/bonus6_user_output.txt
BONUS6_OK_OUTPUT = ${BONUS6_DIR}/bonus6_ok_output.txt
BONUS6_RESULT = ${BONUS6_DIR}/bonus6_result.txt

BONUS7_DIR = ${BONUS_DIR}/bonus7
BONUS7_FILE = ${BONUS7_DIR}/bonus7.c
OBJ7_BONUS = ${BONUS7_FILE:.c=.o}
BONUS7 = bonus7_exe
BONUS7_USER_OUTPUT = ${BONUS7_DIR}/bonus7_user_output.txt
BONUS7_OK_OUTPUT = ${BONUS7_DIR}/bonus7_ok_output.txt
BONUS7_RESULT = ${BONUS7_DIR}/bonus7_result.txt

BONUS8_DIR = ${BONUS_DIR}/bonus8
BONUS8_FILE = ${BONUS8_DIR}/bonus8.c
OBJ8_BONUS = ${BONUS8_FILE:.c=.o}
BONUS8 = bonus8_exe
BONUS8_USER_OUTPUT = ${BONUS8_DIR}/bonus8_user_output.txt
BONUS8_OK_OUTPUT = ${BONUS8_DIR}/bonus8_ok_output.txt
BONUS8_RESULT = ${BONUS8_DIR}/bonus8_result.txt

TESTS_USER	=	${TEST1_USER_OUTPUT} ${TEST2_USER_OUTPUT} ${TEST3_USER_OUTPUT} \
				${BONUS1_USER_OUTPUT} ${BONUS2_USER_OUTPUT} ${BONUS3_USER_OUTPUT} \
				${BONUS4_USER_OUTPUT} ${BONUS5_USER_OUTPUT} ${BONUS6_USER_OUTPUT} \
				${BONUS7_USER_OUTPUT} ${BONUS8_USER_OUTPUT}
TESTS_EXE	=	${TEST1} ${TEST2} ${TEST3} ${BONUS1} ${BONUS2} ${BONUS3} ${BONUS4} \
				${BONUS5} ${BONUS6} ${BONUS7} ${BONUS8}
RESULTS		=	${TEST1_RESULT} ${TEST2_RESULT} ${TEST3_RESULT} ${BONUS1_RESULT} \
				${BONUS2_RESULT} ${BONUS3_RESULT} ${BONUS4_RESULT} ${BONUS5_RESULT} \
				${BONUS6_RESULT} ${BONUS7_RESULT} ${BONUS8_RESULT}
OBJ			=	${OBJ_TEST1} ${OBJ_TEST2} ${OBJ_TEST3} ${OBJ1_BONUS} ${OBJ2_BONUS} \
				${OBJ3_BONUS} ${OBJ4_BONUS} ${OBJ5_BONUS} ${OBJ6_BONUS} ${OBJ7_BONUS} \
				${OBJ8_BONUS}

#RULES

# how to compile the tests
%.o: %.c Makefile
	${CC} ${CFLAGS} -c $< -o $@ -g

# compiles all tests with .a
all: ${TESTS_EXE}

# create the executable
${TEST1}: ${OBJ_TEST1}
	${GCC} -o $@ $< ${LIB_INSTRUCTION} -g
${TEST2}: ${OBJ_TEST2}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${TEST3}: ${OBJ_TEST3}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS1}:
	${CC} ${BONUS1_FILE} ${LIB} -o $@ -g
${BONUS2}: ${OBJ2_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS3}: ${OBJ3_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS4}: ${OBJ4_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS5}: ${OBJ5_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS6}: ${OBJ6_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS7}: ${OBJ7_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}
${BONUS8}: ${OBJ8_BONUS}
	${GCC} -o $@ $< ${LIB_INSTRUCTION}

# runs all tests
run: test1 test2 test3 bonus1 bonus2 bonus3 bonus4 bonus5 bonus6 bonus7 bonus8

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

bonus3: ${BONUS3}
	./$< > ${BONUS3_USER_OUTPUT}
	-diff -s ${BONUS3_USER_OUTPUT} ${BONUS3_OK_OUTPUT} > ${BONUS3_RESULT}

bonus4: ${BONUS4}
	./$< > ${BONUS4_USER_OUTPUT}
	-diff -s ${BONUS4_USER_OUTPUT} ${BONUS4_OK_OUTPUT} > ${BONUS4_RESULT}

bonus5: ${BONUS5}
	./$< > ${BONUS5_USER_OUTPUT}
	-diff -s ${BONUS5_USER_OUTPUT} ${BONUS5_OK_OUTPUT} > ${BONUS5_RESULT}

bonus6: ${BONUS6}
	./$< > ${BONUS6_USER_OUTPUT}
	-diff -s ${BONUS6_USER_OUTPUT} ${BONUS6_OK_OUTPUT} > ${BONUS6_RESULT}

bonus7: ${BONUS7}
	./$< > ${BONUS7_USER_OUTPUT}
	-diff -s ${BONUS7_USER_OUTPUT} ${BONUS7_OK_OUTPUT} > ${BONUS7_RESULT}	

bonus8: ${BONUS8}
	./$< > ${BONUS8_USER_OUTPUT}
	-diff -s ${BONUS8_USER_OUTPUT} ${BONUS8_OK_OUTPUT} > ${BONUS8_RESULT}	

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

.PHONY: all run clean fclean test1 test2 test3 bonus1 bonus2 bonus3 bonus4 bonus5 bonus6 bonus7 display results
