# .devcontainer/Dockerfile
FROM stm32-base:latest

USER root

RUN apt-get update && apt-get install -y nano

# Use the same user as base
USER devuser
WORKDIR /home/devuser/workspace