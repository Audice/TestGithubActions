cmake_minimum_required(VERSION 3.10)

# set the project name
project(TestGithubActions)

include_directories(utils)

# add the executable
add_executable(main main.c)