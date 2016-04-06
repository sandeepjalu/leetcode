/**
* @param {number[]} x
* @return {boolean}
*/
var isSelfCrossing = function(x) {
    for(var i=3, l = x.length; i < l ; i++){
        if(x[i] >= x[i-2] && x[i-1] <= x[i-3]) return true; 
        else if(i>=4 && x[i-1] == x[i-3] && x[i]+x[i-4] >= x[i-2]) return true;
        else if(i>=5 && x[i-2] >= x[i-4] && x[i]+x[i-4] >= x[i-2] &&  x[i-1]<=x[i-3] && x[i-1]+x[i-5]>=x[i-3]) return true;
    }
    return false;
};
