class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        fill(image,sr,sc,color,image[sr][sc]);
        return image;
    }
    
    vector<vector<int>>fill(vector<vector<int>>& image, int sr, int sc, int color, int pix)
    {
        int n = image.size(),m = image[0].size();
        if(image[sr][sc] == pix && image[sr][sc] != color)
        {
            image[sr][sc] = color;
            if(n>sr+1)
                fill(image,sr+1,sc,color,pix);
            if(n > sr && m > sc + 1)
                fill(image,sr,sc+1,color,pix);
            if(sr-1>=0)
                fill(image,sr-1,sc,color,pix);
            if(sc-1>=0)
                fill(image,sr,sc-1,color,pix);
        }
        return image;
    }
};