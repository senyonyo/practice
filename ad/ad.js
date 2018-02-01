var rand =[];
var kind =[ 'bitcoin','love','car'];
function start(){
  i=1
  while (i<4){
    rand.push(Math.floor(Math.random()*(3-1)+1));
    i++;
  }
  alert(rand);
  alert(kind[1]);

  document.getElementById('2').innerHTML = "<img src=\"bitcoin1/bitcoin1-001.jpg\">";
  //" <img src=" "+ kind[0] + 1 + "-00" + 1 +".jpg";
 

/*  for(j=1;j<4;j++){
    word = kind[j-1];
    for(k=1;k<10;k++){
      document.getElementById(j).innerHTML = " <img src=" "+ word + j + "-00" + k +".jpg"
      if(k== 3 || 6){
        document.getElementById(j).innerHTML += </br>
      }
    }*/
  
  
};
