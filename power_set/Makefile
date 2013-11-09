OUTPUT=powerset
C_SOURCE=$(OUTPUT).c 
OBJS=$(C_SOURCE:.c=.o)
LDFLAGS= 
CFLAGS= -c -g -Wall

All:$(C_SOURCE) $(OUTPUT)

$(OUTPUT):$(OBJS)
	$(CC) $(OBJS) -o $@
.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) -f $(OUTPUT) $(OBJS)
