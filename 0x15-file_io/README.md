File descriptor
From Wikipedia, the free encyclopedia
Jump to navigationJump to search
In Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, corresponding to the three standard streams:

Integer value	Name	<unistd.h> symbolic constant[1]	<stdio.h> file stream[2]
0	Standard input	STDIN_FILENO	stdin
1	Standard output	STDOUT_FILENO	stdout
2	Standard error	STDERR_FILENO	stderr

Contents
1	Overview
2	Operations on file descriptors
2.1	Creating file descriptors
2.2	Deriving file descriptors
2.3	Operations on a single file descriptor
2.4	Operations on multiple file descriptors
2.5	Operations on the file descriptor table
2.6	Operations that modify process state
2.7	File locking
2.8	Sockets
2.9	Miscellaneous
3	Upcoming operations
4	File descriptors as capabilities
5	See also
6	References
Overview

File descriptors for a single process, file table and inode table. Note that multiple file descriptors can refer to the same file table entry (e.g., as a result of the dup system call[3]:104 and that multiple file table entries can in turn refer to the same inode (if it has been opened multiple times; the table is still simplified because it represents inodes by file names, even though an inode can have multiple names). File descriptor 3 does not refer to anything in the file table, signifying that it has been closed.
In the traditional implementation of Unix, file descriptors index into a per-process file descriptor table maintained by the kernel, that in turn indexes into a system-wide table of files opened by all processes, called the file table. This table records the mode with which the file (or other resource) has been opened: for reading, writing, appending, and possibly other modes. It also indexes into a third table called the inode table that describes the actual underlying files.[3] To perform input or output, the process passes the file descriptor to the kernel through a system call, and the kernel will access the file on behalf of the process. The process does not have direct access to the file or inode tables.

On Linux, the set of file descriptors open in a process can be accessed under the path /proc/PID/fd/, where PID is the process identifier.

In Unix-like systems, file descriptors can refer to any Unix file type named in a file system. As well as regular files, this includes directories, block and character devices (also called "special files"), Unix domain sockets, and named pipes. File descriptors can also refer to other objects that do not normally exist in the file system, such as anonymous pipes and network sockets.

The FILE data structure in the C standard I/O library usually includes a low level file descriptor for the object in question on Unix-like systems. The overall data structure provides additional abstraction and is instead known as a file handle.

Operations on file descriptors
The following lists typical operations on file descriptors on modern Unix-like systems. Most of these functions are declared in the <unistd.h> header, but some are in the <fcntl.h> header instead.

Creating file descriptors
open()
creat()[4]
socket()
accept()
socketpair()
pipe()
epoll_create() (Linux)
signalfd() (Linux)
eventfd() (Linux)
timerfd_create() (Linux)
memfd_create() (Linux)
userfaultfd() (Linux)
fanotify_init() (Linux)
inotify_init() (Linux)
clone() (with flag CLONE_PIDFD, Linux)
pidfd_open() (Linux)
open_by_handle_at() (Linux)
Deriving file descriptors
dirfd()
fileno()
Operations on a single file descriptor
read(), write()
readv(), writev()
pread(), pwrite()
recv(), send()
recvfrom(), sendto()
recvmsg(), sendmsg() (also used for sending FDs to other processes over a Unix domain socket)
recvmmsg(), sendmmsg()
lseek(), llseek()
fstat()
fstatvfs()
fchmod()
fchown()
ftruncate()
fsync()
fdatasync()
fdopendir()
fgetxattr(), fsetxattr() (Linux)
flistxatrr(), fremovexattr() (Linux)
statx (Linux)
setns (Linux)
vmsplice() (Linux)
pidfd_send_signal() (Linux)
waitid() (with P_PIDFD ID type, Linux)
fdopen() (stdio function:converts file descriptor to FILE*)
dprintf() (stdio function: prints to file descriptor)
Operations on multiple file descriptors
select(), pselect()
poll(), ppoll()
epoll_wait(), epoll_pwait(), epoll_pwait2() (Linux, takes a single epoll filedescriptor to wait on many other file descriptors)
epoll_ctl() (for Linux)
kqueue() (for BSD-based systems).
sendfile()
splice(), tee() (for Linux)
copy_file_range() (for Linux)
close_range() (for Linux)[5]
Operations on the file descriptor table
The fcntl() function is used to perform various operations on a file descriptor, depending on the command argument passed to it. There are commands to get and set attributes associated with a file descriptor, including F_GETFD, F_SETFD, F_GETFL and F_SETFL.

close()
closefrom() (BSD and Solaris only; deletes all file descriptors greater than or equal to specified number)
dup() (duplicates an existing file descriptor guaranteeing to be the lowest number available file descriptor)
dup2(), dup3() (Close fd1 if necessary, and make file descriptor fd1 point to the open file of fd2)
fcntl (F_DUPFD)
Operations that modify process state
fchdir() (sets the process's current working directory based on a directory file descriptor)
mmap() (maps ranges of a file into the process's address space)
File locking
flock()
fcntl() (F_GETLK, F_SETLK and F_SETLKW)
lockf()
Sockets
See also: Berkeley sockets
connect()
bind()
listen()
accept() (creates a new file descriptor for an incoming connection)
getsockname()
getpeername()
getsockopt()
setsockopt()
shutdown() (shuts down one or both halves of a full duplex connection)
Miscellaneous
ioctl() (a large collection of miscellaneous operations on a single file descriptor, often associated with a device)
Upcoming operations
A series of new operations on file descriptors has been added to many modern Unix-like systems, as well as numerous C libraries, to be standardized in a future version of POSIX.[6] The at suffix signifies that the function takes an additional first argument supplying a file descriptor from which relative paths are resolved, the forms lacking the at suffix thus becoming equivalent to passing a file descriptor corresponding to the current working directory. The purpose of these new operations is to defend against a certain class of TOCTOU attacks.

openat()
faccessat()
fchmodat()
fchownat()
fstatat()
futimesat()
linkat()
mkdirat()
mknodat()
readlinkat()
renameat()
symlinkat()
unlinkat()
mkfifoat()
fdopendir()
File descriptors as capabilities
Unix file descriptors behave in many ways as capabilities. They can be passed between processes across Unix domain sockets using the sendmsg() system call. Note, however, that what is actually passed is a reference to an "open file description" that has mutable state (the file offset, and the file status and access flags). This complicates the secure use of file descriptors as capabilities, since when programs share access to the same open file description, they can interfere with each other's use of it by changing its offset or whether it is blocking or non-blocking, for example.[7][8] In operating systems that are specifically designed as capability systems, there is very rarely any mutable state associated with a capability itself.

A Unix process' file descriptor table is an example of a C-list.

See also
fuser (Unix)
lsof
File Control Block (FCB) - an alternative scheme in C/PM and early versions of DOS
References
 The Open Group. "The Open Group Base Specifications Issue 7, IEEE Std 1003.1-2008, 2016 Edition". Retrieved 2017-09-21.
 The Open Group. "The Open Group Base Specifications Issue 7, IEEE Std 1003.1-2008, 2016 Edition". <stdio.h>. Retrieved 2017-09-21.
 Bach, Maurice J. (1986). The Design of the UNIX Operating System (8 ed.). Prentice-Hall. pp. 92–96. ISBN 9780132017992.
 The Open Group. "The Open Group Base Specifications Issue 7, IEEE Std 1003.1-2008, 2018 Edition – creat". Retrieved 2019-04-11.
 Stephen Kitt, Michael Kerrisk. "close_range(2) — Linux manual page". Retrieved 2021-03-22.
 Extended API Set, Part 2. The Open Group. October 2006. ISBN 1931624674.
 Brinkmann, Marcus (2009-02-04). "Building a bridge: library API's and file descriptors?". cap-talk. Archived from the original on 2012-07-30. Retrieved 2017-09-21.
 de Boyne Pollard, Jonathan (2007). "Don't set shared file descriptors to non-blocking I/O mode". Retrieved 2017-09-21.
vte
Object-capability security
Concepts	
Principle of least privilege (PoLP)Confused deputy problemAmbient authorityFile descriptorC-listObject-capability modelCapability-based securityCapability-based addressingZooko's trianglePetnames
OS kernels	
HydraNLTSSKeyKOSEROSCapROSiMAX 432MidoriseL4GenodeFuchsiaCapsicum
Programming languages	
JouleEJoe-ECajita
File systems	
Tahoe-LAFS
Specialised hardware	
FlexPlessey System 250Cambridge CAPIBM System/38Intel iAPX 432BiiN
Categories: POSIXUnix file system technology
Navigation menu
Not logged in
Talk
Contributions
Create account
Log in
ArticleTalk
ReadEditView history
Search
Search Wikipedia
Main page
Contents
Current events
Random article
About Wikipedia
Contact us
Donate
Contribute
Help
Learn to edit
Community portal
Recent changes
Upload file
Tools
What links here
Related changes
Special pages
Permanent link
Page information
Cite this page
Wikidata item
Print/export
Download as PDF
Printable version

Languages
Deutsch
Español
Français
한국어
日本語
Português
Русский
Tiếng Việt
中文
8 more
Edit links
This page was last edited on 19 July 2021, at 21:18 (UTC).
Text is available under the Creative Commons Attribution-ShareAlike License; additional terms may apply. By using this site, you agree to the Terms of Use and Privacy Policy.