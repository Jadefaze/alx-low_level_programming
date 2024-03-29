<h1>0x0A. C - argc, argv </h1>

    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/Jip_nI4tv2ybQZ-jV3fqJg" title="Arguments to main" target="_blank">Arguments to main</a> </li>
<li><a href="/rltoken/31aLwv8qsXuiUZrOk9Djqg" title="argc and argv" target="_blank">argc and argv</a> </li>
<li><a href="/rltoken/A0pzqslB6Z3Y3OV3hJQ6Tw" title="What does argc and argv mean?" target="_blank">What does argc and argv mean?</a> </li>
<li><a href="/rltoken/MkOUE1ndq1UAx9Erk-AVbg" title="how to compile with unused variables" target="_blank">how to compile with unused variables</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/DBgGt1BaQ75AkikI88WbEw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use arguments passed to your program</li>
<li>What are two prototypes of <code>main</code> that you know of, and in which case do you use one or the other</li>
<li>How to use <code>__attribute__((unused))</code> or <code>(void)</code> to compile functions with unused variables or parameters</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>You are allowed to use the standard library</li>
</ul>

 <h2 class="gap">Tasks</h2>
<p>Write a program that prints its name, followed by a new line.</p>

<ul>
<li>If you rename the program, it will print the new name, without having to compile it again</li>
<li>You should not remove the path before the name of the program</li>
</ul>
<p>Write a program that prints the number of arguments passed into it.</p>

<ul>
<li>Your program should print a number, followed by a new line</li>
</ul>
<p>Write a program that prints all arguments it receives.</p>

<ul>
<li>All arguments should be printed, including the first one</li>
<li>Only print one argument per line, ending with a new line</li>
</ul>
  <p>Write a program that multiplies two numbers.</p>

<ul>
<li>Your program should print the result of the multiplication, followed by a new line</li>
<li>You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
<li>If the program does not receive two arguments, your program should print <code>Error</code>, followed by a new line, and return <code>1</code></li>
</ul>
 <p>Write a program that adds positive numbers.</p>

<ul>
<li>Print the result, followed by a new line</li>
<li>If no number is passed to the program, print <code>0</code>, followed by a new line</li>
<li>If one of the number contains symbols that are not digits, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>You can assume that numbers and the addition of all the numbers can be stored in an <code>int</code></li>
</ul>
<p>Write a program that prints the minimum number of coins to make change for an amount of money.</p>

<ul>
<li>Usage: <code>./change cents</code></li>
<li>where <code>cents</code> is the amount of cents you need to give back</li>
<li>if the number of arguments passed to your program is not exactly <code>1</code>, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>you should use <code>atoi</code> to parse the parameter passed to your program</li>
<li>If the number passed as the argument is negative, print <code>0</code>, followed by a new line</li>
<li>You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent</li>
</ul>

