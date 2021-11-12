#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// Adjacency List Method
// Assume that the maximum number of nodes is 10000.

const int max_node = 10001;

// pair.first -> toNode, pair.second -> distance
vector<pair<int, int>> graph[max_node];

// n is number of node, m is number of edge
int n, m;

void initialize_graph() {
  cin >> n >> m;
  
  // Enter edge information.
  for (int i=0; i<m; i++) {
    int from_node, to_node, distance;
    cin >> from_node >> to_node >> distance;
    graph[from_node].push_back({to_node, distance});
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
    for (pair<int, int> p: graph[i]) {
      int from_node = i;
      int to_node = p.first;
      int distance = p.second;

      cout << "Distance from Node" << from_node << " to Node" << to_node << " is " << distance << '\n';
    }
  }
}