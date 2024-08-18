#include <iostream>
#include "graph/graph.h"

int main() {
    std::cout << "Graph Tests\n";

    graph<int> my_graph(true);
    my_graph.add_node(1);
    my_graph.print_nodes_debug();

    std::cout << "\n";

    my_graph.add_node(17);
    my_graph.print_nodes_debug();

    return 0;
}