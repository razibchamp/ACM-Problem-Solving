#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int row,col;
#define valid(nx,ny) nx >= 0 && nx < row && ny >= 0 && ny < col
struct cell{
    int x,y;

    cell(int xx, int yy) {
        x = xx;
        y = yy;
    }
};

int fx[] ={1,-1,0,0};
int fy[] ={0,0,1,-1};

int ctr = 0;

void bfs(char (&G)[21][21], cell src,int w, int h)
{
    int visited[21][21];
    for(int i = 0; i<21; i++)
    {
        for(int j = 0; j<21; j++)visited[i][j] = 0;
    }
    queue<cell>q;

    q.push(src);
    ctr++;
    while(!q.empty())
    {
        cell first = q.front();
        visited[first.x][first.y] = 1;
        int rr = first.x, cc = first.y;

        for(int i = 0; i<4; i++)
        {
            int tx = rr+fx[i];
            int ty = cc+fy[i];

            if(valid(tx,ty) && visited[tx][ty] == 0 && G[tx][ty] == '.')
            {
                cell newcl(tx,ty);
                q.push(newcl);
                visited[tx][ty] = 1;
                ctr++;
            }
        }
        q.pop();
    }
}


int main()
{

    //freopen("in.txt", "r", stdin);
    //freopen("w.txt", "w", stdout);
    int t,w,h, cn = 1;
    int srcx,srcy;
    char c;
    scanf("%d", &t);

    while(cn <= t)
    {
        scanf("%d%d", &w,&h);
        col = w;
        row = h;
        getchar();
        int i,j;
        char G[21][21];
        for(i =0; i<h; i++)
        {
            for(j = 0; j<w; j++)
            {

                scanf("%c", &c);
                //getchar();
                if(c == '@')
                {
                    srcx = i, srcy = j;
                }

                G[i][j] = c;
                //printf("chk: %d %d %c\n", i, j, G[i][j]);
            }
            getchar();
        }

        ctr = 0;
        bfs(G, cell(srcx, srcy),w,h);

        printf("Case %d: %d\n",cn++, ctr);

    }
    return 0;
}
