<h1>0x08. C - Recursion </h1>
<h2> Resources </h2>
<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/dzZB83Hm3lO7dScjhebAxw" title="0x08. Recursion, introduction" target="_blank">0x08. Recursion, introduction</a></li>
<li><a href="/rltoken/xYjKl3024oN58Bi_621_vQ" title="What on Earth is Recursion?" target="_blank">What on Earth is Recursion?</a> </li>
<li><a href="/rltoken/u4ojc5CZpf4qiuQvmXCiOA" title="C - Recursion" target="_blank">C - Recursion</a> </li>
<li><a href="/rltoken/Wv-wffgpXelN9ZTrbmiOyA" title="C Programming Tutorial 85, Recursion pt.1" target="_blank">C Programming Tutorial 85, Recursion pt.1</a> </li>
<li><a href="/rltoken/7GVdI-KT-M1vOIzwEjSahQ" title="C Programming Tutorial 86, Recursion pt.2" target="_blank">C Programming Tutorial 86, Recursion pt.2</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/Uip4OgfLQdGP921TAMtCHQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>
<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn&rsquo;t implement recursion</li>
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
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li><strong>You are not allowed to use any kind of loops</strong></li>
<li>You are not allowed to use <code>static</code> variables</li>
</ul>

  </div>
</div>

<ol>
<li>int _putchar(char c)</li>
<li> void _puts_recursion(char *s)
<p>Write a function that prints a string, followed by a new line.</p>

<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>
 </li>
<li> void _print_rev_recursion(char *s);
<p>Write a function that prints a string in reverse.</p>

<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>
</li>
<li> int _strlen_recursion(char *s);
<p>Write a function that returns the length of a string.</p>

<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>
 </li>
<li> int factorial(int n);
<p>Write a function that returns the factorial of a given number.</p>

<ul>
<li>Prototype: <code>int factorial(int n);</code><br></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br></li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>
 </li>
<li> int _pow_recursion(int x, int y);
<p>Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p>

<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code><br></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>
 </li>
<li> int _sqrt_recursion(int n);
 <p>Write a function that returns the natural square root of a number.</p>

<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code><br></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>
 </li>
<li> int is_prime_number(int n);
<p>Write a function that returns <code>1</code> if the input integer is a <a href="/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw" title="prime number" target="_blank">prime number</a>, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>
 </li>
</ol>
