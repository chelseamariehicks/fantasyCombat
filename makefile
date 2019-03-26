
#Variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -g
HEADERS = GamePlay.hpp Characters.hpp Barbarian.hpp Vampire.hpp BlueMen.hpp Medusa.hpp HarryPotter.hpp
SRCS = gameMain.cpp GamePlay.cpp Characters.cpp Barbarian.cpp Vampire.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp
OBJS = gameMain.o GamePlay.o Characters.o Barbarian.o Vampire.o BlueMen.o Medusa.o HarryPotter.o

#Targets
fantasyCombat: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o fantasyCombat

gameMain.o: gameMain.cpp GamePlay.hpp
	${CXX} ${CXXFLAGS} -c gameMain.cpp

GamePlay.o: GamePlay.cpp GamePlay.hpp Barbarian.hpp
	${CXX} ${CXXFLAGS} -c GamePlay.cpp

Characters.o: Characters.cpp Characters.hpp
	${CXX} ${CXXFLAGS} -c Characters.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c Barbarian.cpp

Vampire.o: Vampire.cpp Vampire.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c Vampire.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c BlueMen.cpp

Medusa.o: Medusa.cpp Medusa.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c Medusa.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c HarryPotter.cpp

clean:
	rm *.o fantasyCombat
