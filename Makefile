OBJS := akasztofa.o Words.o Game.o Player.o

add: $(OBJS)
	g++ -Wall -o add $(OBJS)

akasztofa.o: akasztofa.cpp
	g++ -Wall -c akasztofa.cpp

Words.o: Words.cpp
	g++ -Wall -c Words.cpp

Game.o: Game.cpp
	g++ -Wall -c Game.cpp

Player.o: Player.cpp
	g++ -Wall -c Player.cpp

clean:
	rm -rf *.o add