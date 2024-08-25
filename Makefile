CC = zig c++
CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
NAME = VulkanApp

VulkanApp: main.cpp
	$(CC) $(CFLAGS) -o $(NAME) main.cpp $(LDFLAGS)

.PHONY: test clean

test: $(NAME)
	./$(NAME)

clean:
	rm -f $(NAME)