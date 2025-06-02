open CMD

docker pull gcc:15

Go to the working folder

run : docker build --label clean-label -t punters-docker-app .
run : docker run -it --rm --name punters-docker-app punters-docker-app

clean: docker builder prune --force --filter=label=clean-label


docker build --label clean-label -t punters-docker-app .  && docker run -it --rm --name punters-docker-app punters-docker-app

Debug c++ in Docker
https://www.youtube.com/watch?v=7Zsq5SE25r4