    vector<unordered_set<int>> tree;
    vector<int> ans, cnt;
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        tree.resize(N);
        ans.assign(N, 0);
        cnt.assign(N, 1);
        for (auto e : edges) {
            tree[e[0]].insert(e[1]);
            tree[e[1]].insert(e[0]);
        }
        dfs(0, -1);
        dfs2(0, -1);
        return ans;
    }
    void dfs(int root, int p) {
        for (auto i : tree[root]) {
            if (i == p) continue;
            dfs(i, root);
            cnt[root] += cnt[i];
            ans[root] += ans[i] + cnt[i];
        }
    }
    void dfs2(int root, int p) {
        for (auto i : tree[root]) {
            if (i == p) continue;
            ans[i] = ans[root] - cnt[i] + cnt.size() - cnt[i];
            dfs2(i, root);
        }
    }