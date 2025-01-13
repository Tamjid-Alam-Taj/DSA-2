
#include<bits/stdc++.h>

using namespace std;

int n_edge, n_vertex, p[100], rankk[100];

void make_set()
{
    int i;
    for (i = 0; i < n_vertex; i++)
    {
        p[i] = i;
        // set_size[i] = 1;
        rankk[i] = 0;
    }
}

int find_set(int x)
{
    if (p[x] == x)
        return(x);
    else
        return p[x] = find_set(p[x]);
}

int union_sets(int s1, int s2)
{
    int r1, r2;
    r1 = find_set(s1);
    r2 = find_set(s2);
    if (r1 == r2)
        return 0;
    if (rankk[r1] > rankk[r2])
    {
        p[r2] = r1;

    }
    else
    {
        p[r1] = r2;
        if (rankk[r1] == rankk[r2]) rankk[r2]++;
    }
    return 1;
}

int main()
{
    vector<pair<int, pair<int, int>>> graph1;

    int i, u, v, w;
    cout << "Enter Number of Vertices : \n";
    cin >> n_vertex;
    cout << "Enter Number of Edges : \n";
    cin >> n_edge;
    cout << "Enter the graph : \n";

    for (i = 0; i < n_edge; i++)
    {
        cin >> u >> v >> w;
        graph1.push_back(make_pair(w, make_pair(u, v)));
    }


    sort(graph1.begin(), graph1.end());

    cout << "Sorted Graph according to the Edges : \n";
    for (i = 0; i < n_edge; i++)
    {
        cout << "(" << graph1[i].second.first << ", " << graph1[i].second.second << ") --> " << graph1[i].first << '\n';
    }


    make_set();

    cout << "Minimum Spanning Tree : \n";
    for (i = 0; i < n_edge; i++)
    {
        u = graph1[i].second.first;
        v = graph1[i].second.second;
        if (union_sets(u, v) != 0)
        {
            cout << "(" << u << ", " << v << ") --> " << graph1[i].first << '\n';
        }
    }

    return 0;
}
