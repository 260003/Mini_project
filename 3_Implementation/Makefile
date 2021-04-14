# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = all
SRC = main.c\
src\display.c\
src\feature.c

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
VPATH = SRC INCLUDE 	
EXEC = exe
	
valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)
	
clean:
	del /q *.exe
