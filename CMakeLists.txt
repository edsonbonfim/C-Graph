cmake_minimum_required(VERSION 3.10)
project(Graph C)

set(CMAKE_C_STANDARD 99)

add_executable(Graph main.c Graph.c Vertex.c Edge.c C-List/List.c C-List/Node.c)