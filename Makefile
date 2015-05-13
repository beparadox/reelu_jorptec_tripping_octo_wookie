#=============================================================================
#
#
#   Filename: Makefile
#      Usage: make
#             make clean
#     Author: Bambridge E. Peterson
#     Email:  bambridge.peterson@gmail.com
#
#=============================================================================

#------name of excecutable ---------
EXECUTABLE:=main
#------list of source files
SOURCES=main.cpp
#------- compiler
CC=gcc
CPP=g++


#---------  compiler flags
DEBUG_CFLAGS = -Wall -ansi -pedantic -O0 -g

#---------directories
LOCAL_INC_DIR = ./include
SDIR = ./src
TDIR = ./tests
ODIR = ./src/obj

#-------------- Header files -------------------------------------------------
HFILES = # TODO

#-------------- additional definitions ---------------------------------------
CPP_SOURCES = $(addprefix $(SDIR)/, $(SOURCES))
INC_DIR = $(addprefix -I, $(LOCAL_INC_DIR)) 
BASENAMES = $(basename $(SOURCES))
OBJ_FILES = $(addprefix $(ODIR)/, $(BASENAMES))

OBJECTS = $(addsuffix .o, $(OBJ_FILES))

# ------------- make the executable ----------------------------
$(EXECUTABLE): $(OBJECTS)
	$(CPP) $(ALL_LFLAGS) -o $(EXECUTABLE) $(OBJECTS)

# ------------- make the objects -------------------------------
$(OBJECTS): $(CPP_SOURCES)
	$(CPP) $(INC_DIR) -c $< -o $(OBJECTS)

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
