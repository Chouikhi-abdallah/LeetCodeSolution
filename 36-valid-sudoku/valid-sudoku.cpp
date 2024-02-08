class Solution {
public:
    bool isValidSudoku(vector<vector<char>> board) {
         map<char,vector<pair<char,char>>> mp;
    

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if(board[i][j]!='.')
                mp[board[i][j]].emplace_back(i,j);
        }


    }
    for (auto &entry : mp) {
        for (int i = 0; i < entry.second.size(); i++) {
            for (int j = i+1; j <entry.second.size() ; j++) {
                if(entry.second.at(i).first==entry.second.at(j).first||entry.second.at(i).second==entry.second.at(j).second||entry.second[i].first / 3 == entry.second[j].first / 3 &&
                     entry.second[i].second / 3 == entry.second[j].second / 3)
                    return false;

            }

        }

    }
    return true;

    }
};