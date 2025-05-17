CC=gcc
CFLAGS=-I ./ -Wall -O2
LDLIBS=-lm
DBINS=
IBINS=gfg-2025-05-16

all: $(IBINS)

test:
#	@for test in $(DBINS); do \
#		./$$test | tee -a $$test.log; \
#	done
	@for test in $(IBINS); do \
		(while read line; do ./$$test $$line; done < inputs/$$test) | tee -a $$test.log \
	done

clean:
	@rm -fv $(DBINS) $(IBINS)
	@rm -fv tests/*.out
	@rm -fv tests/*.log
	@rm -rfv tests/*dSYM