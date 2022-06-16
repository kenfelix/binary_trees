CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
PPRINT = binary_tree_print.c
CRNODE = 0-*_node.c # Create node
INRGHT = 2-*_right.c # Insert right
INLFT = 1-*_left.c # Insert left

0: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 0-*.c -o 0-node

1: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 1-*.c $(CRNODE) -o 1-left

2: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 2-*.c $(CRNODE) -o 2-right

3: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 3-*.c $(CRNODE) $(INRGHT) -o 3-del

4: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 4-*.c $(CRNODE) $(INRGHT) -o 4-leaf

5: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 5-*.c $(CRNODE) $(INRGHT) -o 5-root

6: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 6-*.c $(CRNODE) -o 6-pre

7: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 7-*.c $(CRNODE) -o 7-in

8: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 8-*.c $(CRNODE) -o 8-post

9: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 9-*.c $(CRNODE) $(INRGHT) -o 9-height

10: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 10-*.c $(CRNODE) $(INRGHT) -o 10-depth

11: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 11-*.c $(CRNODE) $(INRGHT) -o 11-size

12: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 12-*.c $(CRNODE) $(INRGHT) -o 12-leaves

13: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 13-*.c $(CRNODE) $(INRGHT) -o 13-nodes

14: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 14-*.c $(CRNODE) $(INRGHT) $(INLFT) -o 14-balance

15: $(PPRINT)
	$(CC) $(CFLAGS) $(PPRINT) 15-*.c $(CRNODE) $(INRGHT) -o 15-full

betty:
	echo "Enter task number: "
	@(read arg; arg="$$arg-*.c" && betty $$arg);
