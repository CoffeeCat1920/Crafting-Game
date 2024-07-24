
# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

# Directories
SRCDIR = src
BINDIR = bin
LIBDIR = lib
ASSETSDIR = assets
INCLUDEDIR = include

# Libraries
LIBS = -L$(LIBDIR) -lraylib -lm -lpthread -ldl -lrt -lX11

# Source files and object files
SOURCES = $(wildcard $(SRCDIR)/*.cpp) main.cpp
OBJECTS = $(patsubst %.cpp,$(BINDIR)/%.o,$(notdir $(SOURCES)))

# Executable
EXECUTABLE = $(BINDIR)/main

# Rules
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(OBJECTS) -o $@ $(LIBS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BINDIR)/main.o: main.cpp
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BINDIR)/*.o $(EXECUTABLE)

.PHONY: all clean
