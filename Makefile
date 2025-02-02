program:
	g++ main.cpp Galaxy.cpp Blackhole.cpp DwarfPlanet.cpp GasGiantPlanet.cpp HabitablePlanet.cpp Object.cpp Planet.cpp SpaceShuttle.cpp Source.cpp -o main
	.\main
clean:
	rm -f main