#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int N,I;
vector<int> toPoint[205];

bool BFS(int Start)
{
    queue<int> Q;
    Q.push(Start);
    int visit[205] = {0};

    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int &nxt : toPoint[cur]) {
            if (visit[nxt] == 0) {
                Q.push(nxt);
                if (visit[cur] == 1) visit[nxt] = 2;
                else visit[nxt] = 1;
            }
            else if (visit[nxt] == visit[cur])
                return false;
        }
    }
    return true;
}
int main()
{
  //  freopen ("input.txt","rt",stdin);
    while (scanf("%d", &N)) {
        if (!N) break;
        for (auto &v : toPoint) v.clear();
        scanf("%d", &I);
        int p1, p2;
        for (int i=0; i<I; ++i) {
            scanf("%d %d", &p1, &p2);
            toPoint[p1].push_back(p2);
            toPoint[p2].push_back(p1);
        }
        printf("%s\n", BFS(p1) ? "BICOLORABLE." : "NOT BICOLORABLE.");
    }
}