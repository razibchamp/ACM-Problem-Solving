#include<stdio.h>

int V;
bool graph[100][100];
int m;

bool check (int v, int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return false;
    return true;
}

void printSolution(int color[])
{
    printf("Solution: ");
    for (int i = 0; i < V; i++)
      printf(" %d ", color[i]);
    printf("\n");
}

bool graphColoringUtil(int color[], int v)
{
    if (v == V)
        return true;

    for (int c = 1; c <= m; c++)
    {
        if (check(v, color, c))
        {
           color[v] = c;

           if (graphColoringUtil (color, v+1) == true)
             return true;

           color[v] = 0;
        }
    }

    /* If no color can be assigned to this vertex then return false */
    return false;
}


bool graphColoring()
{
    int *color = new int[V];
    for (int i = 0; i < V; i++)
       color[i] = 0;

    if (graphColoringUtil(color, 0) == false)
    {
      printf("Solution does not exist");
      return false;
    }
    printSolution(color);
    return true;
}


int main()
{
    scanf("%d%d", &V, &m);

    for(int i=0; i<V; i++)
        for(int j=0; j<V; j++)
            scanf("%d", &graph[i][j]);
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            printf("%d  ", graph[i][j]);
        }
        printf("\n");
    }

    graphColoring ();
    return 0;
}
