class Solution {
public:
	int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
		map<int,int>m;
		vector<vector<pair<int,int>>>v(n);
		for(int i=0;i<flights.size();i++)
		{
			v[flights[i][0]].push_back({flights[i][1],flights[i][2]});
		}
		k=k+1;
		for(int i=0;i<n;i++)
		{
			m[i]=INT_MAX;
		}
		m[src]=0;
		queue<pair<int,int>>q;
		q.push({src,0});
		int i=0;
		while(!q.empty() && i<k)
		{
			int j=q.size();
			for(int t=0;t<j;t++)
			{
				auto x=q.front();
				q.pop();
				int a=x.first;
				int b=x.second;
				for(auto it:v[a])
				{
					if(b+it.second<m[it.first])
					{
						m[it.first]=b+it.second;
						q.push({it.first,b+it.second});
					}
				}
			}
			i++;
		}
		if(m[dst]==INT_MAX)
		{
			return -1;
		}
		return m[dst];
	}
};