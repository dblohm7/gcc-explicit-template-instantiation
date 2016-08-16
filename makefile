all: test

srcs := $(wildcard *.cpp)
objs := $(srcs:%.cpp=%.o)

test: $(objs)
	g++ $(objs) -o test

objs: $(srcs)
	g++ -c $< -o $@

clean:
	rm *.o
