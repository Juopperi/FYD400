# Makefile for GTK Application

# Compiler and flags
CC := gcc
CFLAGS := -Wall `pkg-config --cflags gtk+-3.0`

# Linker and libraries
LD := gcc
LDFLAGS := `pkg-config --libs gtk+-3.0`

# Output executable name
OUTPUT := my_gtk_app

# Source files
SOURCES := main.c

# Object files
OBJECTS := $(SOURCES:.c=.o)

# Build rule
$(OUTPUT): $(OBJECTS)
    $(LD) $(LDFLAGS) -o $@ $^

# Compile rule
%.o: %.c
    $(CC) $(CFLAGS) -c -o $@ $<

clean:
    rm -f $(OUTPUT) $(OBJECTS)
