cc=gcc
BUILD_DIR=out

.PHONY: all help build run
build:
	$(cc) "src/main.c" -o "$(BUILD_DIR)/m.out"

run:
	./$(BUILD_DIR)/m.out

help:
	@printf "build: derler\n$(BUILD_DIR) çıktı yolu"