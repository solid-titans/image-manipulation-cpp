#ifndef graph_hpp
#define graph_hpp

#include <vector>
#include "vertex.hpp"
#include "matrix/matrix.cpp"

using edge_value = int32_t;
using number_vertices = int32_t;
using number_edges = int32_t;

class Graph {
    number_vertices count_vertices;
    number_edges count_edges;
    std::vector<vertex_value> all_vertices_values;
    Matrix<edge_value> all_edges_values;

    public:
        
        //
        Graph(number_vertices count_vertices, number_edges count_edges);
        
        //
        void has_space(Vertex *vertx);
        bool add_edge(Vertex *first, Vertex *last, int edge_value);
        bool add_vertex(Vertex *vertx);
        bool search_vertex(Vertex *vertx);
        void print_vertices();
        void print_edges();
        
        //
        short getVerticesNumber();  
        short getEdgesNumber();
        
        virtual std::string print();  
};

#endif