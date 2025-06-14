# In VSCode run: Dev Containers - Reopen in Container
FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# Install build & flash tools
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
      build-essential \
      cmake \
      gcc-arm-none-eabi \
      gdb-multiarch \
      openocd \
      libnewlib-arm-none-eabi \
      libusb-1.0-0-dev \
      libtinfo5 \
      libncurses5 \
      python3 \
      python3-pip \
      git \
      make \
    && rm -rf /var/lib/apt/lists/*

# Create user 'devuser' with passwordless sudo
RUN useradd -ms /bin/bash devuser

# Set working directory
WORKDIR /home/devuser/workspace

# Switch to the new user
USER devuser
