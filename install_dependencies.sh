#!/bin/bash

sudo apt -y update \
    && apt install -y \ 
       ccache \
       clang-tidy \
       cppcheck \
       iwyu \
       graphviz \
       doxygen \
