#declare variable

hello:
	fltk-config --compile Hello.cpp 
runhello: hello
	./Hello
second:
	fltk-config --compile second.cpp
secondrun:  second 
	./second	
third:  
	fltk-config --compile third.cpp
thirdrun:  third
	./third
scope: 
	fltk-config --compile labelScope.cpp
scoperun: scope
	./labelScope
simple:
	fltk-config --compile simpletalk.cpp
simplerun: simple
	./simpletalk
two: 
	fltk-config --compile TwoWidTalk.cpp
tworun: two
	./TwoWidTalk
inherit: 
	fltk-config --compile InheritedWindow.cpp
inheritrun: inherit
	./InheritedWindow
helloclean:
	rm Hello
secondclean:
	rm second
thirdclean:
	rm third
scopeclean:
	rm labelScope
simpleclean:
	rm simpletalk
twoclean:
	rm TwoWidTalk
inheritclean:
	rm InheritedWindow

        
	



