# LunaForge

CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -Iinclude

BUILD := build

.PHONY: all clean run

all: $(BUILD)/hello

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/hello: examples/hello.c src/lf.c include/lf.h | $(BUILD)
	$(CC) $(CFLAGS) examples/hello.c src/lf.c -o $@

run: $(BUILD)/hello
	./$(BUILD)/hello

clean:
	rm -rf $(BUILD)
