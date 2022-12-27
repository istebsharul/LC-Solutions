class Solution 
{
public:
    bool possibleBipartition(int N, vector<vector<int>> &edges) {

        vector<vector<int>> adj(N + 1);
        vector<int> c(N + 1, 0);
        vector<bool> exp(N + 1, false);
        for (auto &edge: edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int> q; 
        for (int i = 1; i <= N; ++i){
            if (!exp[i]){
                c[i] = 1;
                q.push(i);
                while (!q.empty()){
                    int u = q.front();
                    q.pop(); 
                    if (exp[u]){
                        continue;
                    }
                    exp[u] = true;
                    for (auto v: adj[u]){
                        if (c[v] == c[u]){
                            return false;
                        }
                        if (c[u] == 1){
                            c[v] = 2;
                        }
                        else{
                            c[v] = 1;
                        }
                        q.push(v);
                    }
                }
            }
        }
        return true;
    }
};