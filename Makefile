CC = gcc
CFLAGS = -Wall

BUILD_DIR := build
$(shell if [ ! -e $(BUILD_DIR) ]; then mkdir -p $(BUILD_DIR); fi)

SRC_DIR = src

SRCS = $(wildcard $(SRC_DIR)/*.c)
TARGETS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%)
# use TARGETS += to add more dir files
all: $(TARGETS)

$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf build/