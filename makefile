cppfiles=color.cpp
hfiles=$(cppfiles:.cpp:.h)
_objfiles=dir_Color.o dir_Background.o dir_Effect.o dir_ResetEffect.o

binDir=bin/
objfiles=$(subst dir_,$(binDir),$(_objfiles))

comp=g++ -g -Wall
execfile=main

$(execfile) : $(objfiles) $(binDir)main.o
	$(comp) -o $(execfile) $(objfiles) $(binDir)main.o

test : $(objfiles) $(binDir)test.o
	g++ -o test $(objfiles) $(binDir)test.o

$(binDir)%.o : %.cpp
	$(comp) -o $@ -c $<

clean :
	rm $(objfiles) $(binDir)test.o $(binDir)main.o test main
