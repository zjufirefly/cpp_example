srcs=prog.cc
objs:=$(srcs:.cc=.o)
deps:=$(srcs:.cc=.d)

CFLAGS=-c -g -I$(BOOST_INCLUDE)

prog:$(objs)
	g++ -o prog $^ -L$(BOOST_LIB) -lboost_date_time-gcc48-1_51

-include $(deps)
$(objs):%.o:%.cc
	g++ $(CFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" -o $@ $<


.PHONY: clean
clean:
	rm -rf prog *.o *.d


