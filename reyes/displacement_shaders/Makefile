#------------------------------------------------------
# TITLE:  Makefile
# AUTHOR: Adrian Skilling
# ENVIR:  NetBSD
# DESC:   Reyes makefile
# (C)     Copyright $Date$
# $Log$
#------------------------------------------------------

######################################
# Main rules                         #
######################################

# reyes_dir = $(HOME)/src/reyes
reyes_dir = ../

LIBS = -I$(reyes_dir)

CC = gcc
CFLAGS = -O3

sources  = displacement.cpp

objs         = $(sources:%.cpp=%.o)

######################################
# Main rules                         #
######################################

.PHONY: clean

all: libdisplacement_shaders.a

libdisplacement_shaders.a: libdisplacement_shaders.a($(objs))
	ranlib $@

clean:
	-rm *.a *.o *.d core

######################################
# Default rules                      #
######################################
%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@ $(LIBS)

######################################
# Dependency stuff                   #
## ###################################

include $(sources:.cpp=.d)

%.d: %.cpp
	$(SHELL) -ec '$(CC) $(CPPFLAGS) $(LIBS) -M $< | sed '\''s/$*.a/& $@/g'\'' > $@'

libdisplacement_shaders.a: *.h
