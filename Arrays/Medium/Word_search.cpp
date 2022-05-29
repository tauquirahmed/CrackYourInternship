class Solution
{
public:
  bool track(int r, int c, int i, int w, int m, int n, vector<vector<char>> &board, string word)
  {
    if (i == w)
      return true;
    if (r < 0 || c < 0 || r >= m || c >= n || word[i] != board[r][c])
      return false;
    char ch = board[r][c];
    board[r][c] = '*';
    bool ans = false;
    if (track(r + 1, c, i + 1, w, m, n, board, word) || track(r - 1, c, i + 1, w, m, n, board, word) || track(r, c + 1, i + 1, w, m, n, board, word) || track(r, c - 1, i + 1, w, m, n, board, word))
      ans = true;
    board[r][c] = ch;
    return ans;
  }

  bool exist(vector<vector<char>> &board, string word)
  {
    int m = board.size();
    int n = board[0].size();
    int w = word.size();
    for (int row = 0; row < m; row++)
    {
      for (int col = 0; col < n; col++)
      {
        if (track(row, col, 0, w, m, n, board, word))
          return true;
      }
    }

    return false;
  }
};