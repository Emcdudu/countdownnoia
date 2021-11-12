<div class="foo">

<script type="text/javascript">

(function () {
  const second = 1000,
        minute = second * 60,
        hour = minute * 60,
        day = hour * 24;
  
  const countDown = new Date(2021, 11, 06, 23, 59, 59, 999).getTime(),
      x = setInterval(function() {    

        const now = new Date().getTime(),
              distance = countDown - now;

        document.getElementById("days").innerText = Math.floor(distance / (day)),
          document.getElementById("hours").innerText = Math.floor((distance % (day)) / (hour)),
          document.getElementById("minutes").innerText = Math.floor((distance % (hour)) / (minute)),
          document.getElementById("seconds").innerText = Math.floor((distance % (minute)) / second);

        //do something later when date is reached
        if (distance < 0) {
          document.getElementById("headline").innerText = "Assista agora!";
          document.getElementById("countdown").style.display = "none";
          document.getElementById("content").style.display = "block";
          clearInterval(x);
        }
        //seconds
      }, 0)
  }());

</script>
<div class="container">
  <h1 id="headline">20º NOIA - Festival do Audiovisual Universitário</h1>
  <div id="countdown">
    <ul>
      <li><span id="days"></span>dias</li>
      <li><span id="hours"></span> horas</li>
      <li><span id="minutes"></span> minutos</li>
      <li><span id="seconds"></span> segundos</li>
    </ul>
  </div>
  <div id="content" class="emoji">
    <span>🍿</span>
    <span> 🎥</span>
    <span>🎬</span>
  </div>
</div>




<style type="text/css">

:root {
  --smaller: auto
}

* {
  box-sizing: auto;
  margin: 0px;
  padding: auto;
}

html, body {
  height: auto;
  margin: auto;
}

body {
  align-items: center;
  background-color: none;
  display: block;
  margin-top: 25px;
  margin:auto;
  font-family: -apple-system, 
    BlinkMacSystemFont, 
    "Segoe UI", 
    Roboto, 
    Oxygen-Sans, 
    Ubuntu,
    Cantarell, 
    "Helvetica Neue", 
    sans-serif;
}

.container {
  color: #fff;
  height: auto;
  width: auto;
  margin: ; 
  text-align: center;
}

h1 {
  font-weight: 3em;
  font-style: small;
  letter-spacing: 1;
  text-transform: uppercase;
}

li {
  display: inline-block;
  width: 375px;
  font-size: 30px;
  letter-spacing: 1;
  word-spacing: 15px;
  font-weight: bold;
  list-style-type: bold;
  padding: 1;
  text-transform: uppercase;
}

li span {
  display: block;
  font-size: 5.5rem;
  word-spacing: 15px;
}

.emoji {
  display: none;
  padding: auto;
}

.emoji span {
  font-size: 3rem;
  padding: 0.5rem;
}

@media all and (max-width:300px) {
  h1 {
    font-size: calc(1.5rem * var(--smaller));
  }
  
  li {
    font-size: calc(1.5rem * var(--normal));
  }
  
  li span {
    font-size: calc(3.375rem * var(--smaller));
  }
}

</style>
</div>
