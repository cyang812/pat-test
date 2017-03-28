CC := g++  
RM := rm -f  
LIBS =  
  
all:    pat1001 pat1002  
  
pat1001:    pat1001.c  
	$(CC)   pat1001.c -o  ../Debug/pat1001   
pat1002:  pat1002.c     
	$(CC)   pat1002.c   -o  ../Debug/pat1002 