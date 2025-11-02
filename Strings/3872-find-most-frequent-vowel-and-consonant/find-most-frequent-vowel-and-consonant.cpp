class Solution {
public:
    int maxFreqSum(string s) {

     int maxVovel=0;
     int maxConsonant=0;
     int cnt1=0,cnt2=0;
     int n=s.length();
     unordered_map<char,int>mpp;

     for(int i=0; i<n; i++){
        mpp[s[i]]++;
     
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o'||s[i]=='u'){
            maxVovel=max(maxVovel,mpp[s[i]]);
        }
        else{
            maxConsonant=max(maxConsonant,mpp[s[i]]);
        }
     }
     return (maxVovel+maxConsonant);
    }
};