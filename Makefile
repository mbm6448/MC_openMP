CC = g++
CFLAGS = -Wall -fopenmp -Iinclude
SRCDIR = src
OBJDIR = obj
BINDIR = bin
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))
TARGET = $(BINDIR)/monte_carlo_sim

all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CC) $^ -o $@ $(CFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

