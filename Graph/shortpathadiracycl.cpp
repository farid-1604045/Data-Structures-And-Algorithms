//Shortest path in directed acyclic graph
//O(N+2E)

class Solution
{
private:
    void toposort(int node, vector<pair<int,int>>adj[], int vis[], stack<int>&st)
    {
        vis[node]=1;
        for(auto it: adj[node])
        {
            int v = it.first();
            if(!vis[v])
            {
                toposort(v,adj,vis,st);
            }
        }
        st.push(node);
    }
public:
    vector<int> shortestPath(int N, int M, vector<int> edges[])
    {
        vector<pair<int,int>> adj[N];
        for(int i=0; i<N; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edgees[i][2];
            adj[u].push_back({v,wt});
        }

        int vis[N]={0};
        stack<int>st;
        for(int i=0; i<N; i++)
        {
            if(!vis[i])
            {
                toposort(i,adj,vis,st);
            }
        }

        //step-2: do the distance thing
        vector<int>dist(N);
        for(int i=0; i<N; i++)
        {
            dist[i]=INT_MAX;
        }
        dist[0]=0;
        while(!st.empty())
        {
            int node = st.top();
            st.pop();
            for(auto it: adj[node])
            {
                int v = it.first;
                int wt = it.second;
                if(dist[node]+wt <dist[v])
                {
                    dist[v]=dist[node]+1;
                }
            }
        }
        return dist;
    }
};
