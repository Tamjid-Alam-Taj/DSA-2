#include<bits/stdc++.h>

using namespace std;

int n_edge; // total edges
int n_vertex; // total vertices
int p[100], rankk[100];

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
        return 0; /* already in same set */
    if (rankk[r1] > rankk[r2])
    {
        p[r2] = r1;
        // set_size[r1] = set_size[r1] + set_size[r2];
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
    int i;
    // take the graph as input from the user
    // store the graph
    // sort the graph according to edge
    // make set

    n_vertex = 10;
    n_edge = 7;

    make_set();
    union_sets(0, 1);
    union_sets(0, 2);
    union_sets(3, 4);
    union_sets(6, 7);
    union_sets(6, 8);
    union_sets(7, 8);
    union_sets(7, 9);

    cout << find_set(9) << endl;
    cout << find_set(8) << endl;
    cout << find_set(7) << endl;
    cout << find_set(6) << endl;
    cout << find_set(5) << endl;
    cout << find_set(4) << endl;
    cout << find_set(3) << endl;
    cout << find_set(2) << endl;
    cout << find_set(1) << endl;
    cout << find_set(0) << endl;

    return 0;
}
