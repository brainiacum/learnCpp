
all:	1a.bin 1b.bin 1c.bin

1a.bin: 1a.o
	@echo '\t'[LD] $<
	@g++ $< -o $@
1a.o: 1a.cpp
	@echo '\t'[CC] $<
	@g++ -c $<

1b.bin: 1b.o
	@echo '\t'[LD] $<
	@g++ $< -o $@
1b.o: 1b.cpp
	@echo '\t'[CC] $<
	@g++ -c $<

1c.bin: 1c.o
	@echo '\t'[LD] $<
	@g++ $< -o $@
1c.o: 1c.cpp
	@echo '\t'[CC] $<
	@g++ -c $<

clean:
	@echo "*** CLEAN ALL ***"
	@rm -f *.o *.bin

.PHONY: clean