#include <iostream>
using namespace std;

int adj[20][20];
/*Here, you declare a 2D array named adj with 20 rows and 20 columns.
This array will be used to represent the adjacency matrix of a graph.
It's a way to store information about which nodes are connected to each other.*/

int main()
{

    int node, edge;
    cout << "Enter the number of Node and Edge:" << endl;
    cin >> node >> edge;
    /*Here, you declare two integer variables, node and edge, to store the number of nodes and edges in your graph.
    Then, you use cout to display a message asking the user to input these numbers. 
    After that, you use cin to read the user's input into the node and edge variables.*/

    int n1, n2;
    cout << "Enter the Connection:" << endl;
    /*You declare two more integer variables, n1 and n2, which will be used to store the connections between nodes. 
    You display a message asking the user to input these connections.*/
    
    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
    /*This for loop is used to input the connections between nodes.
    It runs edge times (as specified by the user).
    Inside the loop, you use cin to read two integers (n1 and n2) representing a connection between two nodes.
    You then set adj[n1][n2] and adj[n2][n1] to 1 to indicate that there is an edge between nodes n1 and n2. 
    This code is for an undirected graph, so you set both entries to 1.*/
    cout << "Adjacency Matrix: " << endl;

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    /*These nested for loops are used to print the adjacency matrix.
    They go through each row and column of the adj array and print the values (0 or 1) in the matrix.
    Each row is separated by a line break (endl). 
    This loop effectively displays the connections between nodes in the graph.*/
}
