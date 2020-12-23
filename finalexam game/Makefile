#simple rule -compile and link in one go
#note:header files are not passed to compiler -they are
#are only included in source dile!!! However, they may
#may appear in dependency list
game: main.cpp FantasyGame.h FantasyGame.cpp showFunction.h showFunction.cpp 
	g++ -Wall -ggdb -o game main.cpp FantasyGame.cpp showFunction.cpp 


#clean up -handy to enforce recomplation
clean:
	rm *~ *# game
