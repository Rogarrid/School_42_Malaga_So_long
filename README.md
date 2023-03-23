<h1 tabindex="-1" dir="auto"><a id="user-content-so_long" class="anchor" aria-hidden="true" href="#so_long"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>so_long - Juego 2D</h1>
<div align="center" dir="auto">
<a target="_blank" rel="noopener noreferrer nofollow" href="https://user-images.githubusercontent.com/111855553/227193265-a180c94a-c537-4a9a-b4c1-f2756a2e09b1.png"><img width="830" alt="Game" src="https://user-images.githubusercontent.com/111855553/227193265-a180c94a-c537-4a9a-b4c1-f2756a2e09b1.png" style="max-width: 100%;"></a>
</div>
<h2 tabindex="-1" dir="auto"><a id="user-content-table-of-contents" class="anchor" aria-hidden="true" href="#table-of-contents"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Índice de Contenido</h2>
<ul dir="auto">
<li><a href="#Resumen del proyecto">Resumen del proyecto</a></li>
<li><a href="#Vayamos por partes!">Vayamos por partes!</a></li>
<li><a href="#Resultado">Resultado</a></li>
<li><a href="#Trucos para realizar el proyecto">Trucos para realizar el proyecto</a></li>
<li><a href="#¿Qué he aprendido?">¿Qué he aprendido?</a></li>
</ul>
<h2 tabindex="-1" dir="auto"><a id="user-content-project-overview" class="anchor" aria-hidden="true" href="#project-overview"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Resumen del proyecto</h2>
<p dir="auto">Este proyecto consiste en crear un juego 2D. El objetivo del jugador es recoger todos los objetos coleccionables del mapa, en mi caso pócimas y escapar.</p>
<p dir="auto">La finalizar de este proyecto es sobre todo el familiarizarme con las texturas, los sprites y otros elementos muy básicos de la jugabilidad.
Se tiene libertad para elegir un tema. En mi caso decidí ambientarlo en la edad media donde una aventurera tiene que ir recolectando pócimas.</p>
<p dir="auto">Para la parte gráfica del proyecto utilicé la biblioteca proporcionada por 42 codam: <a href="https://github.com/codam-coding-college/MLX42">https://github.com/codam-coding-college/MLX42, aunque en el subject del proyecto pone que hay que usar la Minilibx, pero esta es más complicada de instalar.</a></p>
<p dir="auto">El juego recibe los diferentes mapas por argumentos, y debe cumplir la condición de acabar en .ber</p>
<h3 tabindex="-1" dir="auto"><a id="user-content-map-requirements" class="anchor" aria-hidden="true" href="#map-requirements"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Map Requirements</h3>
<ul dir="auto">
<li>The map has to be constructed with 3 components: walls, collectibles, and free space.</li>
<li>The map can be composed of only these 5 characters:
<code>0</code> for an empty space,
<code>1</code> for a wall,
<code>C</code> for a collectible,
<code>E</code> for a map exit,
<code>P</code> for the player’s starting position.</li>
<li>The map must contain 1 exit, at least 1 collectible, and 1 starting position to be valid.</li>
<li>The map must be rectangular.</li>
<li>The map must be closed/surrounded by walls. If it’s not, the program must return an error.</li>
<li>There must be a valid path in the map.</li>
<li>You must be able to parse any kind of map, as long as it respects the above rules.</li>
<li>If any misconfiguration of any kind is encountered in the file, the program must exit in a clean way, and return <code>Error\</code> followed by an explicit error   message of your choice.</li>
</ul>
<h2 tabindex="-1" dir="auto"><a id="user-content-divide-and-conquer" class="anchor" aria-hidden="true" href="#divide-and-conquer"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Divide and Conquer</h2>
<p dir="auto">I got started with a to-do-list that I then worked off bit by bit:</p>
<p dir="auto"><ins>1. Theme and Graphics</ins></p>
<ul dir="auto">
<li>choice of theme</li>
<li>image research</li>
<li>image manipulation using GIMP (transparency and resizing)</li>
</ul>
<p dir="auto"><ins>2. Code Structure</ins></p>
<ul dir="auto">
<li>create a Makefile that doesn't relink</li>
<li>create a header file</li>
</ul>
<p dir="auto"><ins>3. Parsing</ins></p>
<ul dir="auto">
<li>read the map file with the C-functions <code>open</code> and <code>read</code> and store its content in a string</li>
<li>store the map in a 2D-array</li>
<li>check that the map is valid (see requirements above)</li>
<li>check that the path is valid (all collectibles and exit reachable) using floodfill</li>
<li>implement error messages</li>
</ul>
<p dir="auto"><ins>4. Game Coding</ins></p>
<ul dir="auto">
<li>keyboard input (<code>W</code> <code>A</code> <code>S</code> <code>D</code> + arrow keys for moving and <code>ESC</code> for closing the game)</li>
<li>image conversion to <code>.xpm42</code> using <code>xpm3_conv.py</code>-file of the MLX42</li>
<li>initialization of assets (in this case only images)</li>
<li>rendering</li>
<li>implement the hooks</li>
<li>display the movement count in the shell</li>
<li>display messages in the shell (a)when player wants to go on exit before collecting all the collectibles, b) when the player collected them all, c) when     the player quit the game before finishing and d)when the player won the game)</li>
<li>add more maps</li>
</ul>
<p dir="auto"><ins>5. Bonus</ins></p>
<ul dir="auto">
<li>add an enemy patrol as a character (X)</li>
<li>implement enemys random movements</li>
<li>collision detection</li>
<li>add some sprite animation (enemy will get agitated when player collected 3 collectibles)</li>
<li>display movement count + collectible count + messages in window</li>
<li>design "You won"-image und "Game Over"-image and display them accordingly in the window</li>
</ul>
<h2 tabindex="-1" dir="auto"><a id="user-content-bonus" class="anchor" aria-hidden="true" href="#bonus"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Bonus</h2>
<div align="center" dir="auto">
<a target="_blank" rel="noopener noreferrer nofollow" href="https://user-images.githubusercontent.com/114035440/213343266-3b0d36bd-a0f5-4362-b8f2-b6bb08316dbc.png"><img width="575" alt="Game_bonus" src="https://user-images.githubusercontent.com/114035440/213343266-3b0d36bd-a0f5-4362-b8f2-b6bb08316dbc.png" style="max-width: 100%;"></a>
</div>
<h2 tabindex="-1" dir="auto"><a id="user-content-result" class="anchor" aria-hidden="true" href="#result"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Result</h2>
<p dir="auto">Here is a sample gameplay of the original game (without the bonus part):
<animated-image data-catalyst=""><a target="_blank" rel="noopener noreferrer nofollow" href="https://user-images.githubusercontent.com/114035440/213477897-520b5c5a-4d84-469c-b686-23b607d1ed83.gif" data-target="animated-image.originalLink"><img src="https://user-images.githubusercontent.com/114035440/213477897-520b5c5a-4d84-469c-b686-23b607d1ed83.gif" alt="Game" style="max-width: 100%; display: inline-block;" data-target="animated-image.originalImage"></a>
      <span class="AnimatedImagePlayer" data-target="animated-image.player" hidden="">
        <a data-target="animated-image.replacedLink" class="AnimatedImagePlayer-images" href="https://user-images.githubusercontent.com/114035440/213477897-520b5c5a-4d84-469c-b686-23b607d1ed83.gif" target="_blank">
          
        <span data-target="animated-image.imageContainer">
            <img data-target="animated-image.replacedImage" alt="Game" class="AnimatedImagePlayer-animatedImage" src="https://user-images.githubusercontent.com/114035440/213477897-520b5c5a-4d84-469c-b686-23b607d1ed83.gif" style="display: block; opacity: 1;">
          <canvas class="AnimatedImagePlayer-stillImage" aria-hidden="true" width="830" height="318"></canvas></span></a>
        <button data-target="animated-image.imageButton" class="AnimatedImagePlayer-images" tabindex="-1" aria-label="Play Game" hidden=""></button>
        <span class="AnimatedImagePlayer-controls" data-target="animated-image.controls" hidden="">
          <button data-target="animated-image.playButton" class="AnimatedImagePlayer-button" aria-label="Play Game">
            <svg aria-hidden="true" focusable="false" class="octicon icon-play" width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
              <path d="M4 13.5427V2.45734C4 1.82607 4.69692 1.4435 5.2295 1.78241L13.9394 7.32507C14.4334 7.63943 14.4334 8.36057 13.9394 8.67493L5.2295 14.2176C4.69692 14.5565 4 14.1739 4 13.5427Z">
            </path></svg>
            <svg aria-hidden="true" focusable="false" class="octicon icon-pause" width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg">
              <rect x="4" y="2" width="3" height="12" rx="1"></rect>
              <rect x="9" y="2" width="3" height="12" rx="1"></rect>
            </svg>
          </button>
          <a data-target="animated-image.openButton" aria-label="Open Game in new window" class="AnimatedImagePlayer-button" href="https://user-images.githubusercontent.com/114035440/213477897-520b5c5a-4d84-469c-b686-23b607d1ed83.gif" target="_blank">
            <svg aria-hidden="true" class="octicon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16">
              <path fill-rule="evenodd" d="M10.604 1h4.146a.25.25 0 01.25.25v4.146a.25.25 0 01-.427.177L13.03 4.03 9.28 7.78a.75.75 0 01-1.06-1.06l3.75-3.75-1.543-1.543A.25.25 0 0110.604 1zM3.75 2A1.75 1.75 0 002 3.75v8.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 12.25v-3.5a.75.75 0 00-1.5 0v3.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-8.5a.25.25 0 01.25-.25h3.5a.75.75 0 000-1.5h-3.5z"></path>
            </svg>
          </a>
        </span>
      </span></animated-image></p>
<p dir="auto">Here are some sample gameplays with the bonus part:</p>
<p dir="auto"><animated-image data-catalyst=""><a target="_blank" rel="noopener noreferrer nofollow" href="https://user-images.githubusercontent.com/114035440/213476899-ec70c44e-fdd8-4d48-a855-b67acf33e335.gif" data-target="animated-image.originalLink"><img src="https://user-images.githubusercontent.com/114035440/213476899-ec70c44e-fdd8-4d48-a855-b67acf33e335.gif" alt="fw7hl-vaxu1" style="max-width: 100%; display: inline-block;" data-target="animated-image.originalImage"></a>
      <span class="AnimatedImagePlayer" data-target="animated-image.player" hidden="">
        <a data-target="animated-image.replacedLink" class="AnimatedImagePlayer-images" href="https://user-images.githubusercontent.com/114035440/213476899-ec70c44e-fdd8-4d48-a855-b67acf33e335.gif" target="_blank">
          
        <span data-target="animated-image.imageContainer">
            <img data-target="animated-image.replacedImage" alt="fw7hl-vaxu1" class="AnimatedImagePlayer-animatedImage" src="https://user-images.githubusercontent.com/114035440/213476899-ec70c44e-fdd8-4d48-a855-b67acf33e335.gif" style="display: block; opacity: 1;">
          <canvas class="AnimatedImagePlayer-stillImage" aria-hidden="true" width="640" height="480"></canvas></span></a>
        <button data-target="animated-image.imageButton" class="AnimatedImagePlayer-images" tabindex="-1" aria-label="Play fw7hl-vaxu1" hidden=""></button>
        <span class="AnimatedImagePlayer-controls" data-target="animated-image.controls" hidden="">
          <button data-target="animated-image.playButton" class="AnimatedImagePlayer-button" aria-label="Play fw7hl-vaxu1">
            <svg aria-hidden="true" focusable="false" class="octicon icon-play" width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
              <path d="M4 13.5427V2.45734C4 1.82607 4.69692 1.4435 5.2295 1.78241L13.9394 7.32507C14.4334 7.63943 14.4334 8.36057 13.9394 8.67493L5.2295 14.2176C4.69692 14.5565 4 14.1739 4 13.5427Z">
            </path></svg>
            <svg aria-hidden="true" focusable="false" class="octicon icon-pause" width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg">
              <rect x="4" y="2" width="3" height="12" rx="1"></rect>
              <rect x="9" y="2" width="3" height="12" rx="1"></rect>
            </svg>
          </button>
          <a data-target="animated-image.openButton" aria-label="Open fw7hl-vaxu1 in new window" class="AnimatedImagePlayer-button" href="https://user-images.githubusercontent.com/114035440/213476899-ec70c44e-fdd8-4d48-a855-b67acf33e335.gif" target="_blank">
            <svg aria-hidden="true" class="octicon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16">
              <path fill-rule="evenodd" d="M10.604 1h4.146a.25.25 0 01.25.25v4.146a.25.25 0 01-.427.177L13.03 4.03 9.28 7.78a.75.75 0 01-1.06-1.06l3.75-3.75-1.543-1.543A.25.25 0 0110.604 1zM3.75 2A1.75 1.75 0 002 3.75v8.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 12.25v-3.5a.75.75 0 00-1.5 0v3.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-8.5a.25.25 0 01.25-.25h3.5a.75.75 0 000-1.5h-3.5z"></path>
            </svg>
          </a>
        </span>
      </span></animated-image></p>
<p dir="auto"><animated-image data-catalyst=""><a target="_blank" rel="noopener noreferrer nofollow" href="https://user-images.githubusercontent.com/114035440/213475698-e9776bae-260d-4613-8ef6-eefebbea8858.gif" data-target="animated-image.originalLink"><img src="https://user-images.githubusercontent.com/114035440/213475698-e9776bae-260d-4613-8ef6-eefebbea8858.gif" alt="pz2lz-22ycj" style="max-width: 100%; display: inline-block;" data-target="animated-image.originalImage"></a>
      <span class="AnimatedImagePlayer" data-target="animated-image.player" hidden="">
        <a data-target="animated-image.replacedLink" class="AnimatedImagePlayer-images" href="https://user-images.githubusercontent.com/114035440/213475698-e9776bae-260d-4613-8ef6-eefebbea8858.gif" target="_blank">
          
        <span data-target="animated-image.imageContainer">
            <img data-target="animated-image.replacedImage" alt="pz2lz-22ycj" class="AnimatedImagePlayer-animatedImage" src="https://user-images.githubusercontent.com/114035440/213475698-e9776bae-260d-4613-8ef6-eefebbea8858.gif" style="display: block; opacity: 1;">
          <canvas class="AnimatedImagePlayer-stillImage" aria-hidden="true" width="640" height="480"></canvas></span></a>
        <button data-target="animated-image.imageButton" class="AnimatedImagePlayer-images" tabindex="-1" aria-label="Play pz2lz-22ycj" hidden=""></button>
        <span class="AnimatedImagePlayer-controls" data-target="animated-image.controls" hidden="">
          <button data-target="animated-image.playButton" class="AnimatedImagePlayer-button" aria-label="Play pz2lz-22ycj">
            <svg aria-hidden="true" focusable="false" class="octicon icon-play" width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
              <path d="M4 13.5427V2.45734C4 1.82607 4.69692 1.4435 5.2295 1.78241L13.9394 7.32507C14.4334 7.63943 14.4334 8.36057 13.9394 8.67493L5.2295 14.2176C4.69692 14.5565 4 14.1739 4 13.5427Z">
            </path></svg>
            <svg aria-hidden="true" focusable="false" class="octicon icon-pause" width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg">
              <rect x="4" y="2" width="3" height="12" rx="1"></rect>
              <rect x="9" y="2" width="3" height="12" rx="1"></rect>
            </svg>
          </button>
          <a data-target="animated-image.openButton" aria-label="Open pz2lz-22ycj in new window" class="AnimatedImagePlayer-button" href="https://user-images.githubusercontent.com/114035440/213475698-e9776bae-260d-4613-8ef6-eefebbea8858.gif" target="_blank">
            <svg aria-hidden="true" class="octicon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16">
              <path fill-rule="evenodd" d="M10.604 1h4.146a.25.25 0 01.25.25v4.146a.25.25 0 01-.427.177L13.03 4.03 9.28 7.78a.75.75 0 01-1.06-1.06l3.75-3.75-1.543-1.543A.25.25 0 0110.604 1zM3.75 2A1.75 1.75 0 002 3.75v8.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 12.25v-3.5a.75.75 0 00-1.5 0v3.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-8.5a.25.25 0 01.25-.25h3.5a.75.75 0 000-1.5h-3.5z"></path>
            </svg>
          </a>
        </span>
      </span></animated-image></p>
<p dir="auto"><animated-image data-catalyst=""><a target="_blank" rel="noopener noreferrer nofollow" href="https://user-images.githubusercontent.com/114035440/213786640-c86e3474-1e1f-4b62-ba87-57c3fd4034f2.gif" data-target="animated-image.originalLink"><img src="https://user-images.githubusercontent.com/114035440/213786640-c86e3474-1e1f-4b62-ba87-57c3fd4034f2.gif" alt="uh8ub-d2vw5" style="max-width: 100%; display: inline-block;" data-target="animated-image.originalImage"></a>
      <span class="AnimatedImagePlayer" data-target="animated-image.player" hidden="">
        <a data-target="animated-image.replacedLink" class="AnimatedImagePlayer-images" href="https://user-images.githubusercontent.com/114035440/213786640-c86e3474-1e1f-4b62-ba87-57c3fd4034f2.gif" target="_blank">
          
        <span data-target="animated-image.imageContainer">
            <img data-target="animated-image.replacedImage" alt="uh8ub-d2vw5" class="AnimatedImagePlayer-animatedImage" src="https://user-images.githubusercontent.com/114035440/213786640-c86e3474-1e1f-4b62-ba87-57c3fd4034f2.gif" style="display: block; opacity: 1;">
          <canvas class="AnimatedImagePlayer-stillImage" aria-hidden="true" width="720" height="480"></canvas></span></a>
        <button data-target="animated-image.imageButton" class="AnimatedImagePlayer-images" tabindex="-1" aria-label="Play uh8ub-d2vw5" hidden=""></button>
        <span class="AnimatedImagePlayer-controls" data-target="animated-image.controls" hidden="">
          <button data-target="animated-image.playButton" class="AnimatedImagePlayer-button" aria-label="Play uh8ub-d2vw5">
            <svg aria-hidden="true" focusable="false" class="octicon icon-play" width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
              <path d="M4 13.5427V2.45734C4 1.82607 4.69692 1.4435 5.2295 1.78241L13.9394 7.32507C14.4334 7.63943 14.4334 8.36057 13.9394 8.67493L5.2295 14.2176C4.69692 14.5565 4 14.1739 4 13.5427Z">
            </path></svg>
            <svg aria-hidden="true" focusable="false" class="octicon icon-pause" width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg">
              <rect x="4" y="2" width="3" height="12" rx="1"></rect>
              <rect x="9" y="2" width="3" height="12" rx="1"></rect>
            </svg>
          </button>
          <a data-target="animated-image.openButton" aria-label="Open uh8ub-d2vw5 in new window" class="AnimatedImagePlayer-button" href="https://user-images.githubusercontent.com/114035440/213786640-c86e3474-1e1f-4b62-ba87-57c3fd4034f2.gif" target="_blank">
            <svg aria-hidden="true" class="octicon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16">
              <path fill-rule="evenodd" d="M10.604 1h4.146a.25.25 0 01.25.25v4.146a.25.25 0 01-.427.177L13.03 4.03 9.28 7.78a.75.75 0 01-1.06-1.06l3.75-3.75-1.543-1.543A.25.25 0 0110.604 1zM3.75 2A1.75 1.75 0 002 3.75v8.5c0 .966.784 1.75 1.75 1.75h8.5A1.75 1.75 0 0014 12.25v-3.5a.75.75 0 00-1.5 0v3.5a.25.25 0 01-.25.25h-8.5a.25.25 0 01-.25-.25v-8.5a.25.25 0 01.25-.25h3.5a.75.75 0 000-1.5h-3.5z"></path>
            </svg>
          </a>
        </span>
      </span></animated-image></p>
<h2 tabindex="-1" dir="auto"><a id="user-content-tips-for-42-students" class="anchor" aria-hidden="true" href="#tips-for-42-students"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>Tips for 42 students</h2>
<ul dir="auto">
<li>if you haven't worked with structs before, take the opportunity to do so at the beginning of the project, you will need them</li>
<li>before coding a new function, think of the functions you already have in libft and see if you can use them (obviously you can also use ft_printf und       get_next_line for this project), HOWEVER: every problem can be solved in different ways, so don't feel obligated to use code from previous projects if     you think of a better solution (for example, I preferred to read the file character by character and put it in one string first before converting it       to a 2D-array instead of using gnl)</li>
<li>concerning the images, my first reflex was to allocate memory on the heap every loophook but it's more convenient and less risky for leaks to simply       put them in a struct as pointer to <code>mlx_image_t</code></li>
<li>at the beginning, the players movement lagged a bit because of the rendering queue that kept growing, so I decided to delete and rerender the images       at every hook (however a better approach would be to delete and rerender only when something moves)</li>
<li>for the enemy movement I used the C-function <code>rand()</code> to decide in which direction the enemy would move. The enemy can move one tile at a time in       any direction. To achieve this, I needed a random number between -1 and 1, which I obtained using this formula: <code>(rand() % 3) - 1</code>. I then added         the randomly generated number to the x and y coordinates of the enemy to make it move accordingly. This means it can also move diagonally.</li>
<li>for the sprite animation, I alternate between two images at a given frequency. This frequency is determined using a gameloop-count and a speed             variable. Every loop, I check if the result of <code>gameloop-count % speed</code> is over or under half the speed. One image or the other is shown                 respectively</li>
<li>make sure you clean your old assets and messages/strings that you put in the window, you can use the MLX42-function <code>mlx_delete_image</code> to do so</li>
<li>for leaks detection I used <code>leaks -atExit -- ./so_long [a map-file]</code> instead of valgrind. Xcode’s leaks function is a very handy tool and is already     preinstalled on the school computers</li>
</ul>
<h2 tabindex="-1" dir="auto"><a id="user-content-what-i-learned" class="anchor" aria-hidden="true" href="#what-i-learned"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>What I learned</h2>
<p dir="auto">I learned how to manipulate images using GIMP.
I digged into the cross-platform graphics interface MLX42. I learned how to deal with textures, images and pixels. Plus, I learned how to use hooks, structs and random numbers. I learned how to implement error management and think about the edge cases. I improved my understanding of the Makefile and adopted the habit of testing my code after every change the hard way. Finally, I deepened my understanding of the heap and the stack. I learned to avoid heap allocation when possible.
All in all, I really enjoyed this project because of its concrete output and liked it the most of all the 42 projects so far.</p>
</article>
