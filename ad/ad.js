var rand =[];
var kind =[ 'bitcoin','love','car'];
function start(){
  i=1
  while (i<4){
    rand.push(Math.floor(Math.random()*3+1));
    i++;
  }
  console.log(rand);

  //document.getElementById('2').innerHTML = "<img src=" + kind[0] + 1 + "-00" + 9 +".jpg>";
 
  for(j=1;j<4;j++){
    word = kind[j-1];
    for(k=1;k<10;k++){
      document.getElementById(j).innerHTML += "<img src=\""+ word + rand[j-1] + "/" + word + rand[j-1] + "-00" + k +".jpg\">";
     if(k == 3 || k == 6){
        document.getElementById(j).innerHTML += "<br>";
      }
    }
  }
  
};
