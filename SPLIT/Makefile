NAME		= Classification
EXEC		= $(NAME)

CC		= gcc
CFLAGS		= -std=gnu99 -Wall
LDFLAGS		= -lm

OBJ		= ClassificationControl.o ClassificationData.o

all:		run

$(EXEC):	$(OBJ)
		$(CC) $(CFLAGS) -o $@ $(OBJ) $(LDFLAGS)

run:		$(EXEC)
.INTERMEDIATE: 	$(OBJ)

clean:
		rm $(EXEC)	
