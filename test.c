#include <sys/syscall.h>
main()
{
    char * argv[] = {"/usr/bin/unlink","/home/student/grades.txt", (char *)0};
    char * envp[] = {0};
    execve("/usr/bin/unlink", argv, envp);
}

// pushq	%rax
// movq	$0x7478742e73656461,%rbx /* unlink */
// pushq	%rbx
// pushq	%rax
// movq	$0x72672f746e656475,%rbx /* unlink */
// pushq	%rbx
// pushq	%rax
// movq	$0x74732f656d6f682f,%rbx /* unlink */
// pushq	%rbx