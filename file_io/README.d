Pulling from wikipedia on file descriptors

Three standard descriptors:
STDIN_FILENO <unistd.h> or stdin <stdio.h>
STDOUT_FILENO <unistd.h> or stdout <stdio.h>
STDERR_FILENO <unistd.h> or stderr <stdio.h>

file descriptor table maintained by kernel which indexs into system wide table opened by all procs
