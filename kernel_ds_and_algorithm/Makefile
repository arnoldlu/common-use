# Makefile to build all programs in all subdirectories
# DIRS is a list of all subdirectories containing Makefiles

DIRS = 	linked-list \

BUILD_DIRS = ${DIRS}

all:
	@ for dir in ${BUILD_DIRS}; do (cd $${dir}; ${MAKE}); done
allgen:
	@ for dir in ${BUILD_DIRS}; do (cd $$(dir); ${MAKE} allgen); done
clean:
	@ for dir in ${BUILD_DIRS}; do (cd $${dir}; ${MAKE} clean); done
