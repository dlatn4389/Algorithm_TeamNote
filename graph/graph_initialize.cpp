#include <iostream>
#include <algorithm>
using namespace std;

// INFINITY: Value when there is no edge between the node and the node
const int INFINITY = 123456789;

// adjacency matrix method
// Assume that the maximum number of nodes is 10000.

const int max_node = 10001;
int graph[max_node][max_node];

// n is number of edge, m is number of edge
int n, m;

void initialize_graph() {
  cin >> n >> m;
  
  // Initialize all values to INFINITY.
  for (int i=1; i<n+1; i++) {
    for (int j=1; j<n+1; j++) {
      graph[i][j] = INFINITY;
      // If necessary, activate the code below.
      // if (i==j) graph[i][j] = 0;
    }
  }

  // Enter edge information.
  for (int i=0; i<m; i++) {
    int fromNode, toNode, distance;
    cin >> fromNode >> toNode >> distance;
    // Assume graph is directed graph
    graph[fromNode][toNode] = distance;
  }
}

// You can use function "print()" to check function "initialize_graph()" works correct
void print();

int main() {
  initialize_graph();
  // print();
}

void print() {
  for (int i=1; i<n+1; i++) {
    for (int j=1; j<n+1; j++) {
      if (graph[i][j]!=INFINITY) {
        cout << "Distance from Node" << i << " to Node" << j << " is " << graph[i][j] << '\n';
      }
    }
  }
}