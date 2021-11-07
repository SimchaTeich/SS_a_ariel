all: loopd loops recursived‬‬ recursives mains maindloop maindrec

#todo - if libclassrec.a exist, dont compile it again.
mains: main.o libclassrec.a
	gcc -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc -o maindloop main.o ./libclassloops.so

maindrec: main.o libclassrec.so
	gcc -o maindrec main.o ./libclassrec.so

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so


libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o



libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o


basicClassification.o: basicClassification.c NumClass.h
	gcc -fPIC -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -fPIC -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -fPIC -c advancedClassificationRecursion.c

main.o: main.c NumClass.h
	gcc -c main.c


clean:
	rm -f *.o *.a *.so mains maindloop maindrec

.PHONY: loops recursives recursived‬‬ loopd all clean