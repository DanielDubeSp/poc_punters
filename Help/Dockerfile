FROM gcc:15
RUN mkdir -p /punters_docker
COPY main.c /punters_docker
WORKDIR /punters_docker
RUN gcc -o punters_docker-app main.c
CMD ["./punters_docker-app"]