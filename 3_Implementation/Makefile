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
	
clean:
	del /q *.exe
