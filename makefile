# Variáveis de compilação
CXX = g++
CXXFLAGS = -Wall -Iincludes
LIBS = -lGL -lGLU -lglut -lGLEW

# Lista de arquivos fonte
SRC = src/main.cpp src/keyboard.cpp src/simpleDraw.cpp src/animations.cpp src/display.cpp $(wildcard src/objects/*.cpp)

# Nome do executável
TARGET = bedroom

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) $(LIBS) -o $(TARGET)

clean:
	rm -f $(TARGET)
