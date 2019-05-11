cppfiles=color.cpp
hfiles=$(cppfiles:.cpp:.h)
_objfiles=dir_Color.o dir_Background.o dir_Effect.o dir_ResetEffect.o dir_test.o

binDir=bin/
objfiles=$(subst dir_, $(binDir), $(_objfiles))

comp=g++ -g -Wall

test : $(objfiles)
	g++ -o test $(objfiles)

$(binDir)%.o : %.cpp
	$(comp) -o $@ -c $<

clean :
	rm $(objfiles) test
