class Solution {
  List<int> luckyNumbers (List<List<int>> matrix) {
  List<int>l=[];
  for(int i=0;i<matrix.length;i++){
    for(int j=0;j<matrix[i].length;j++){
      int maxi=matrix[i][j];
      int mini=matrix[i][j];
      int realMax=0;
      int realMin=100001;
      for(int k=0;k<matrix[i].length;k++){
        realMin=min(realMin,matrix[i][k]);

      }
      for(int k=0;k<matrix.length;k++){
        realMax=max(realMax,matrix[k][j]);
      }
      
      if(realMin==mini&&realMax==maxi)
        l.add(matrix[i][j]);
      
    }

  }


  return l;
}
}