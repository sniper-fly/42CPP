#!/bin/bash

sed -i -e "s@^SRCS =.*@SRCS = $(find . -type f -name '*.cpp' | tr '\n' ' ')@g" Makefile
