#
# c++11
#
CPPFLAGS += -std=c++11

#
# vperformance
#
VPERFORMANCE_DIR := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
CPPFLAGS += -I$(VPERFORMANCE_DIR)/src
