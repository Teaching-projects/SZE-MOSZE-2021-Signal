OBJS := akasztofa.o Words.o Game.o Player.o
CFLAGS := -Wall -std=c++17
CC := g++-9

play: $(OBJS)
	$(CC) $(CFLAGS) -o play $(OBJS)

akasztofa.o: akasztofa.cpp Game.h Words.h Player.h
	g++ -Wall -c akasztofa.cpp

Words.o: Words.cpp
	g++ -Wall -c Words.cpp

Game.o: Game.cpp
	g++ -Wall -c Game.cpp

Player.o: Player.cpp
	g++ -Wall -c Player.cpp

clean:
	rm -rf *.o play *.out ./docs 

cppcheck:
	cppcheck *.cpp --enable=warning --output-file=cppcheck_errors.txt
	cppcheck *.cpp --enable=performance,style --output-file=cppcheck.txt

check_memoryleak:
	valgrind --leak-check=yes --error-exitcode=1 cat | ./play