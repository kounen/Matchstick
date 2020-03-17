# CPE_matchstick_2019

<h3>Purpose of this project</h3>
This game is actually called Marienbad's game. There are 2 
players, here a human and an AI. The winner is the one who
doesn't pull out the last match. In short, the one who loses 
is the one who takes the last match off the board. The first 
row always consists of a single match, the number of which
increases by two with each row down. The number of rows is
chosen according to parameter 1. Parameter 2 corresponds to
the maximum number of matches that can be removed in each
round. Removed matches will always be removed from right to
left. Good game and good luck!<br>

<h3>Usage</h3>
./matchstick lines matches <br>

<h3>Description</h3>
lines is a positive line number > 1 or < 100.<br>
matches is a positive maximum number matches > 0.<br>

<h3>Option</h3>
"-h" to display the help page.<br>

<h3>Percentage</h3>
91.8%<br>

<h3>Mark</h3>
18/20<br>

<h3>Coding Style</h3>
<em>Major</em> : 0<br>
<em>Minor</em> : 0<br>
<em>Info</em> : 0<br>

<h3>Coverage</h3>
<em>Branches</em> : 0%<br>
<em>Lines</em> : 0%<br>

<h3>Tests</h3>
<strong>01 - Initial display of 4x4 board</strong><br>
<em>3/3</em> : 100%<br>
<strong>02 - Bad inputs</strong><br>
<em>12/12</em> : 100%<br>
<strong>03 - Full games</strong><br>
<em>20/20</em> : 100%<br>
<strong>03.5 - More full games</strong><br>
<em>4/4</em> : 100%<br>
<strong>04 - AI effectiveness</strong><br>
<em>6/10</em> : 60%<br>
