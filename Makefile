cc=tcc
BUILD_DIR=build

.PHONY: all help build run clean

clean:
	@rm -rvf ./$(BUILD_DIR)/kimyacının_programı.elf64

build: $(clean)
	@[ -d "$(BUILD_DIR)" ] || mkdir -v $(BUILD_DIR)
	$(cc) "src/main.c" -I./include/ -o "$(BUILD_DIR)/kimyacının_programı.elf64"

run:
	./$(BUILD_DIR)/kimyacının_programı.elf64

help:
	@printf "build: $(BUILD_DIR) dizinine derler\nrun: çalıştırı\nclean: temizler"
