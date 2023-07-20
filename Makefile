binfirst := tree
binsecond := pids
obj1 := tree.o
obj2 := pids.o

all: $(binfirst) $(binsecond)

$(binfirst): $(obj1) 
	gcc $< -o $(binfirst) 

$(binsecond): $(obj2)
	gcc $< -o $(binsecond) 

%.o: %.c
	gcc -c $< -o $@
