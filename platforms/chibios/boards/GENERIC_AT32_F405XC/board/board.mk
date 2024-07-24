include $(CHIBIOS)/os/hal/boards/AT_START_F405xx/board.mk

# List of all the board related files.
#BOARDSRC = $(CHIBIOS)/os/hal/boards/AT_START_F405xx/board.c

# Required include directories
BOARDINC = $(CHIBIOS)/os/hal/boards/AT_START_F405xx

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
