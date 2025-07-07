# .devcontainer/Dockerfile
FROM stm32-base:latest

USER root

RUN apt-get update && apt-get install -y --no-install-recommends \
    nano \
    minicom \
    pkg-config \
    iputils-ping \
    binutils-multiarch

RUN pip install pyserial

# Use the same user as base
USER devuser
WORKDIR /home/devuser/workspace