FROM ubuntu:latest

RUN apt-get update && \ apt-get install -y \
	build-essential \
	cmake \
	g ++ \
	&& rm -rf /var/lib/apt/lists/*


WORKDIR /app

COPY . .

RUN mkdir build && cd build && \
	cmake .. && \
	make

CMD ["./build/your_executable"]