// 11% 69%
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cont=0;
        if(n==0) return true;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0 && n==1) return true;
            return false;
        } 
        if(flowerbed[flowerbed.size()-1] ==0 && flowerbed[flowerbed.size()-2] ==0){
            cont++;
            flowerbed[flowerbed.size()-1]=1;
        }
        for(int i=flowerbed.size()-2; i>0 ;i--){
             if(flowerbed[i-1] ==0 && flowerbed[i] ==0 && flowerbed[i+1] ==0){
                 cont++;
                 flowerbed[i]=1;
             }
        }
        if(flowerbed[0]==0 && flowerbed[1] ==0){
            cont++;
        }
        if(cont>= n) return true;
        return false;
    }
    
};