#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x % 3 == 0 && x % 5 == 0) cout << "The number is divisbile by 3 and 5"; // either we can use x % 15 == 0 then 
                                                                              //  also it will work
    
    
    
                                                                              // yahan && ki jagah and aur & bhi use karenge to result same hi ayega lekin 
    // and aur && ek dum 100% same hai wo historically and ko bhi introduce karna pada dono cpu ko load kam sdete 
    // hai ek baar mai koi false hua to doosra condition check nhi karte jabki & karta hai bits switching kelie & use 
    // hota hai wahi istype ke programs mai && ya and use hota hai isme && use karna zyada standard hai aur genrelly
    // coders wahi use karte hai
    else cout << "The number is not divsible by 3 and 5";
}

// is program mai agar & use kiya to program crash hojayega kyuki wo doosra condition bhi check karega aur jaise 
// 1/0 hoga to program crash hojayega wahi agar && ya and use kare to nhi hoga kyuki wo ek staemnt hi agar false agaya 
// mtlb x = 0 hai par pehal false anne par doosra check nhi hoga && ya and ki wajah se aur program crash hone se bach 
// jayega
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     int y;
//     cout << "Enter a number: ";
//     cin >> x;
//     cin >> y;
//     if(x != 0 & y/x > 2);
// }

// if else ka rishta kab toot ta hai aur kab nhi (concept) :-
// if(...); else(...): Dikhne mein lagta hai ki dono sath hain, par beech mein woh Null Statement (Semicolon) ek 
// invisible teesri line bankar interrupt kar deta hai. if ka parivaar wahi khatam ho jata hai, aur else ke upar ek 
// khali deewar aa jati hai. Rishta toot gaya!if(...) cout << ""; else(...): Yahan if ka parivaar us cout wali line 
// tak chalta hai. Semicolon us line ke aakhiri mein hai. Iske turant baad else aa jata hai, beech mein koi interrupt 
// karne wala teesra banda (ya null statement) nahi hota. Rishta ekdum salamat!