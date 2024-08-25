CC = zig c++
CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
NAME = VulkanApp
OUT = output

$(NAME): main.cpp
	mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $(OUT)/$(NAME) main.cpp $(LDFLAGS)

.PHONY: test clean

test: $(NAME)
	$(OUT)/$(NAME)

clean:
	rm -f $(OUT)/$(NAME)