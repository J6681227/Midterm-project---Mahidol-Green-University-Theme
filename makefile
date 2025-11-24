DEPS= green
compile: src/main.cpp 
	 g++ src/*.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)

clean: $(DEPS)
	 rm $(DEPS)