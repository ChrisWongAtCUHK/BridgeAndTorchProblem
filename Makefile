CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: bridge_and_torch.exe
	@./bridge_and_torch.exe
bridge_and_torch.exe: Main.cpp
	$(CC) $(CFLAGS) -o bridge_and_torch.exe Main.cpp
clean:
	@rm *.exe
