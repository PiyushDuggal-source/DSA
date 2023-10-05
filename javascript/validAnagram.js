var isAnagram = function(s, t) {
  let sobj = {};
  let tobj = {};

  if (t.length != s.length) {
    return false;
  }

  for (var i = 0; i < s.length; i++) {
    if (s[i] in sobj) {
      sobj[s[i]] += 1;
    } else {
      sobj[s[i]] = 1;
    }

    if (t[i] in tobj) {
      tobj[t[i]] += 1;
    } else {

      tobj[t[i]] = 1;
    }
  }

for (const key in sobj) {
    console.log(tobj[key] == sobj[key])
    
}
  console.log(sobj, tobj)
};
isAnagram("abcccd", 'bcvcda')



