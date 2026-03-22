#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // 1. Create adjacency list
        // Using vector<pair> for better performance in VS Code/Competitive Programming
        vector<pair<int, int>> adj[V];
        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        // 2. Distance array initialized to Infinity
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;

        // 3. Set to store {distance, node}
        set<pair<int, int>> st;
        st.insert({0, src});

        while (!st.empty()) {
            // Get the node with the smallest distance
            auto top = *(st.begin());
            int nodeDistance = top.first;
            int topNode = top.second;
            st.erase(st.begin());

            // Traverse neighbors
            for (auto &neighbor : adj[topNode]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (nodeDistance + weight < dist[v]) {
                    // If node already in set with a larger distance, remove it
                    auto record = st.find({dist[v], v});
                    if (record != st.end()) {
                        st.erase(record);
                    }

                    // Update distance and insert new path into set
                    dist[v] = nodeDistance + weight;
                    st.insert({dist[v], v});
                }
            }
        }
        return dist;
    }
};

int main() {
    // Example usage based on the GeeksforGeeks problem description
    int V = 3;
    int src = 2;
    vector<vector<int>> edges = {
        {0, 1, 1}, 
        {1, 2, 3}, 
        {0, 2, 6}
    };

    Solution obj;
    vector<int> res = obj.dijkstra(V, edges, src);

    cout << "Shortest distances from source " << src << ":" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << " : " << res[i] << endl;
    }

    return 0;
}