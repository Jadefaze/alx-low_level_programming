<h1>FILE HANDLING IN C PROJECT </h1>

 <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/Duva-9Fjyskt39R__Nnazg" title="File descriptors" target="_blank">File descriptors</a> </li>
<li><a href="/rltoken/x05veqiLPSxXmJf9zTtCkQ" title="C Programming in Linux Tutorial #024 - open() read() write() Functions" target="_blank">C Programming in Linux Tutorial #024 - open() read() write() Functions</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>open</code></li>
<li><code>close</code></li>
<li><code>read</code></li>
<li><code>write</code></li>
<li><code>dprintf</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/kQg2-u-cAYxh6oJz2TWHWw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Look for the right source of information online</li>
<li>How to create, open, close, read and write files</li>
<li>What are file descriptors</li>
<li>What are the 3 standard file descriptors, what are their purpose and what are their <code>POSIX</code> names</li>
<li>How to use the I/O system calls <code>open</code>, <code>close</code>, <code>read</code> and <code>write</code></li>
<li>What are and how to use the flags <code>O_RDONLY</code>, <code>O_WRONLY</code>, <code>O_RDWR</code></li>
<li>What are file permissions, and how to set them when creating a file with the <code>open</code> system call</li>
<li>What is a system call</li>
<li>What is the difference between a function and a system call</li>
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
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>Allowed syscalls: <code>read</code>, <code>write</code>, <code>open</code>, <code>close</code></li>
<li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Tip: always prefer using symbolic constants (<code>POSIX</code>) vs numbers when it makes sense. For instance <code>read(STDIN_FILENO, ...</code> vs <code>read(0, ...</code></li>
</ul>
