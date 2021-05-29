# Using kali linux g++ compiler
# Created by Zouma Adama on 2021/4/18.
# Copyright 2021 Zouma Adama. All rights reserved.

# define the CPP compiler to use
CXX               = g++

# define comipler flags
CXXFLAGS          = -std=c++17
CXXFLAGS         += -Wall 
CXXFLAGS         += -fmax-errors=10
CXXFLAGS         += -Wextra


# define library paths suffixes
LDFLAGS_SUFF      = .
LDFLAGS_SUFF     += ../Lib
LDFLAGS_SUFF     += /usr/lib
LDFLAGS_SUFF     += /lib
LDFLAGS_SUFF     += /usr/share/doc

# define library paths
LDFLAGS           = $(addprefix -L , $(LDFLAGS_SUFF))

# define opencv library suffixes
OPENCV_LIBS_SUFF  = calib3d 
OPENCV_LIBS_SUFF += core
OPENCV_LIBS_SUFF += features2d
OPENCV_LIBS_SUFF += flann
OPENCV_LIBS_SUFF += highgui
OPENCV_LIBS_SUFF += imgcodecs
OPENCV_LIBS_SUFF += ml
OPENCV_LIBS_SUFF += objdetect
OPENCV_LIBS_SUFF += photo
OPENCV_LIBS_SUFF += shape
OPENCV_LIBS_SUFF += stitching
OPENCV_LIBS_SUFF += superres
OPENCV_LIBS_SUFF += video
OPENCV_LIBS_SUFF += videoio
OPENCV_LIBS_SUFF += videostab

# define opencv libraries
OPENCV_LIBS       = $(addprefix -lopencv_, $(OPENCV_LIBS_SUFF))

# define all libraries 
LDLIBS            = $(OPENCV_LIBS)

# define header paths suffixes
CPPFLAGS_SUFF     = .
CPPFLAGS_SUFF    += ./extension
CPPFLAGS_SUFF    += ../Include
CPPFLAGS_SUFF    += /usr/include
CPPFLAGS_SUFF    += /usr/include/opencv4

#define header paths
CPPFLAGS          = $(addprefix -I , $(CPPFLAGS_SUFF))


# define  executables
EXEC              = demo

# define extension
# EXT1 = ./extension/ext1/ext1.cpp

# all

all:
	@echo "Running make"
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o demo demo.cpp $(LDFLAGS) $(LDLIBS)
	@#Recipe with extensions EXT1
	@#$(CXX) $(CXXFLAGS) $(CPPFLAGS)-o demo demo.cpp $(EXT1) $(LDFLAGS) $(LDLIBS)
    


clean:
	rm  $(EXEC)

