cc=tcc #gcc
BUILD_DIR=build
runF=./$(BUILD_DIR)/kimyacının_programı.elf64

.PHONY: all build help run clean
build: $(clean)
	@[ -d "$(BUILD_DIR)" ] || mkdir -v $(BUILD_DIR)
	$(cc) "src/main.c" -I./include/ -o $(runF)

clean:
	@rm -rvf $(runF)
run:
	$(runF)

help:
	@printf "build: $(BUILD_DIR) dizinine derler\nrun: çalıştırır\nclean: temizler\n"