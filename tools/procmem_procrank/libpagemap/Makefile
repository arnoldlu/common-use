


LOCAL_SRC_FILES := \
	pm_kernel.o \
	pm_process.o \
	pm_map.o \
	pm_memusage.o

CFLAGS += -I./include -D_LARGEFILE64_SOURCE
libpagemap.a : $(LOCAL_SRC_FILES)
	ar crsPD libpagemap.a $(LOCAL_SRC_FILES)

.PHONY: clean
clean:
	-rm libpagemap.a *.o
