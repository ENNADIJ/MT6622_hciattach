CFLAGS = \
-I ../../../../custom/common/cgen/cfgdefault/  \
-I ../../../../custom/common/cgen/cfgfileinc/ 

#-I /opt/android/sysroot/usr/include

GCC=arm-linux-androideabi-gcc


radiomod.o:radiomod.c
	$(GCC) -c radiomod.c $(CFLAGS) -DMTK_MT6622 -o radiomod.o

radiomgr.o:radiomgr.cpp
	$(GCC) -c radiomgr.cpp $(CFLAGS) -DMTK_MT6622 -o radiomgr.o

mtk.o:mtk.c
	$(GCC) -c mtk.c $(CFLAGS) -DMTK_MT6622 -o mtk.o

power:power.c
	$(GCC) power.c -static -o power

hciattach:hciattach.c
	$(GCC) hciattach.c  -o hciattach -ldl

libbluetooth_mtk.so: mtk.o radiomgr.o radiomod.o
	$(GCC) mtk.o radiomgr.o radiomod.o -shared -Wl -o libbluetooth_mtk.so 

all:power libbluetooth_mtk.so hciattach

