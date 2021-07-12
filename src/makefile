export Exe := baraxax
export C_files := $(wildcard *.cpp)
export o_files := $(patsubst %.cpp, %.o, $(C_files))

$Exe :$(o_files) 
	g++ $^ -o  baraxax
	mv baraxax ..

%.o : %.cpp
	g++ -c $^ -o $@

clean :
	rm -r *.o $(Exe)
