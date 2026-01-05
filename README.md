<p><em>This activity has been created as part of the 42 curriculum by tmeqdad.</em></p>

<h1>Get Next Line</h1>

<h2>Description</h2>
<p>
<strong>Get Next Line</strong> is a project from the 42 curriculum that implements a function
reading from a file descriptor and returning one line per call.
The project focuses on file I/O, static variables, and memory management in C.
</p>

<h2>Instructions</h2>
<p>Compile the project:</p>
<pre><code>cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
</code></pre>

<p>With a custom buffer size:</p>
<pre><code>cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
</code></pre>

<h2>Algorithm</h2>
<p>
The function reads data using <code>read()</code> and stores it in a static buffer.
When a newline is found, a line is extracted and returned, while the remaining data
is kept for the next call.
This ensures correct behavior across multiple calls and efficient memory usage.
</p>

<h2>Resources</h2>
<ul>
  <li>42 Network documentation</li>
  <li><code>man read</code>, <code>man open</code>, <code>man malloc</code></li>
  <li>AI was used for understanding concepts and algorithm reasoning; all code was written by the student.</li>
</ul>
