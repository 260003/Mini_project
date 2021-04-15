# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = all



SRC =main.c\
src/feature.c\
src/display.c


INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
ifdef OS
   RM = rm 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


TEST_PROJ_NAME = Test_$(PROJECT_NAME)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)
	
coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c
	
clean:
	del /q *.exe
