CC := g++  
RM := rm -f  
LIBS =  
  
all:    pat1001 pat1002 pat1003 pat1004 pat1005 pat1006  
  
pat1001:    pat1001.c  
	$(CC)   pat1001.c -o  ../Debug/pat1001   
pat1002:  pat1002.c     
	$(CC)   pat1002.c   -o  ../Debug/pat1002 
pat1003:  pat1003.c     
	$(CC)   pat1003.c   -o  ../Debug/pat1003
pat1004:  pat1004.c     
	$(CC)   pat1004.c   -o  ../Debug/pat1004
pat1005:  pat1005.c     
	$(CC)   pat1005.c   -o  ../Debug/pat1005
pat1006:  pat1006.c     
	$(CC)   pat1006.c   -o  ../Debug/pat1006 	 