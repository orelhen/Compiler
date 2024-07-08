# Use an official Ubuntu as a parent image
FROM ubuntu:latest

# Set the working directory
WORKDIR /usr/src/app

# Install necessary packages
RUN apt-get update && apt-get install -y \
    flex \
    bison \
    gcc \
    make \
    && rm -rf /var/lib/apt/lists/*

# Copy the current directory contents into the container
COPY . .

# Specify the command to run when the container starts
CMD ["/bin/bash"]
