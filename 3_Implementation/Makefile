# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = all
TEST_PROJ_NAME = Test_$(PROJ_NAME)
SRC =main.c\
src/feature.c\
src/display.c


INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
VPATH = SRC INCLUDE 	
EXEC = exe
	
valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)
	
coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c -o $(call FixPath.$(EXEC)) -lm
	$(call FixPath, ..$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c
	
clean:
	del /q *.exe
