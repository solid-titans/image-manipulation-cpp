#ifndef vertex_hpp
#define vertex_hpp

#include<stdint.h>

using vertex_value = uint8_t;
using vertex_tag =  int32_t;

class Vertex {
    vertex_value value;
    vertex_tag tag;

    public:

        // Constructor
        Vertex(vertex_value value);

        // Functions get and set 
        void set_vertex_value(vertex_value value);
        int get_vertex_value();
        void set_vertex_tag(vertex_tag tag);
        int get_vertex_tag();

        // Print value of the current vertex
        void print_this_vertex();

};

#endif