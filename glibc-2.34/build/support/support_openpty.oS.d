$(common-objpfx)support/support_openpty.oS: \
 support_openpty.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../support/tty.h ../support/check.h ../include/sys/cdefs.h \
 ../misc/sys/cdefs.h ../include/features.h ../include/features-time64.h \
 ../sysdeps/unix/sysv/linux/features-time64.h \
 ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/unix/sysv/linux/x86/bits/timesize.h ../include/gnu/stubs.h \
 ../sysdeps/ieee754/ldbl-96/bits/long-double.h ../support/support.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h ../include/stdint.h \
 ../stdlib/stdint.h ../bits/libc-header-start.h ../include/bits/types.h \
 ../posix/bits/types.h ../sysdeps/unix/sysv/linux/x86/bits/typesizes.h \
 ../bits/time64.h ../bits/wchar.h ../bits/stdint-intn.h \
 ../bits/stdint-uintn.h /usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h \
 ../include/sys/stat.h ../io/sys/stat.h \
 ../include/bits/types/struct_timespec.h \
 ../time/bits/types/struct_timespec.h ../include/bits/endian.h \
 ../string/bits/endian.h ../sysdeps/x86/bits/endianness.h \
 ../include/bits/types/time_t.h ../time/bits/types/time_t.h \
 ../sysdeps/unix/sysv/linux/bits/stat.h \
 ../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h \
 ../include/bits/statx.h ../io/bits/statx.h \
 ../include/bits/statx-generic.h ../io/bits/statx-generic.h \
 ../include/bits/types/struct_statx_timestamp.h \
 ../io/bits/types/struct_statx_timestamp.h \
 ../include/bits/types/struct_statx.h ../io/bits/types/struct_statx.h \
 ../sysdeps/unix/sysv/linux/x86/xstatver.h \
 ../include/struct___timespec64.h \
 ../sysdeps/unix/sysv/linux/struct_stat_time64.h ../include/sys/types.h \
 ../posix/sys/types.h ../include/bits/types/clock_t.h \
 ../time/bits/types/clock_t.h ../include/bits/types/clockid_t.h \
 ../time/bits/types/clockid_t.h ../include/bits/types/timer_t.h \
 ../time/bits/types/timer_t.h ../include/endian.h ../string/endian.h \
 ../bits/byteswap.h ../bits/uintn-identity.h ../include/sys/select.h \
 ../misc/sys/select.h ../bits/select.h ../include/bits/types/sigset_t.h \
 ../signal/bits/types/sigset_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h \
 ../include/bits/types/struct_timeval.h \
 ../time/bits/types/struct_timeval.h ../sysdeps/nptl/bits/pthreadtypes.h \
 ../sysdeps/nptl/bits/thread-shared-types.h \
 ../sysdeps/x86/nptl/bits/pthreadtypes-arch.h \
 ../sysdeps/x86/nptl/bits/struct_mutex.h \
 ../sysdeps/x86/nptl/bits/struct_rwlock.h ../include/locale.h \
 ../locale/locale.h ../include/bits/locale.h ../locale/bits/locale.h \
 ../include/bits/types/locale_t.h ../locale/bits/types/locale_t.h \
 ../include/bits/types/__locale_t.h ../locale/bits/types/__locale_t.h \
 ../include/errno.h ../stdlib/errno.h \
 ../sysdeps/unix/sysv/linux/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 ../bits/types/error_t.h ../include/stdlib.h ../sysdeps/x86/bits/floatn.h \
 ../bits/floatn-common.h ../stdlib/stdlib.h \
 ../sysdeps/unix/sysv/linux/bits/waitflags.h ../bits/waitstatus.h \
 ../include/alloca.h ../stdlib/alloca.h ../include/stackinfo.h \
 ../sysdeps/x86_64/stackinfo.h ../include/elf.h ../elf/elf.h \
 ../include/libc-pointer-arith.h ../sysdeps/generic/dl-dtprocnum.h \
 ../sysdeps/pthread/allocalim.h ../include/limits.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../sysdeps/unix/sysv/linux/bits/local_lim.h /usr/include/linux/limits.h \
 ../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h \
 ../sysdeps/unix/sysv/linux/bits/pthread_stack_min.h \
 ../include/bits/posix2_lim.h ../posix/bits/posix2_lim.h \
 ../include/bits/xopen_lim.h ../sysdeps/unix/sysv/linux/bits/uio_lim.h \
 ../include/bits/stdlib-float.h ../stdlib/bits/stdlib-float.h \
 ../include/rtld-malloc.h ../include/string.h \
 ../sysdeps/x86/string_private.h ../string/string.h ../include/strings.h \
 ../string/strings.h ../include/fcntl.h ../io/fcntl.h \
 ../sysdeps/unix/sysv/linux/x86/bits/fcntl.h \
 ../sysdeps/unix/sysv/linux/bits/fcntl-linux.h \
 ../include/bits/types/struct_iovec.h ../misc/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../include/termios.h ../termios/termios.h \
 ../sysdeps/unix/sysv/linux/bits/termios.h \
 ../sysdeps/unix/sysv/linux/bits/termios-struct.h \
 ../sysdeps/unix/sysv/linux/bits/termios-c_cc.h \
 ../sysdeps/unix/sysv/linux/bits/termios-c_iflag.h \
 ../sysdeps/unix/sysv/linux/bits/termios-c_oflag.h \
 ../sysdeps/unix/sysv/linux/bits/termios-baud.h \
 ../sysdeps/unix/sysv/linux/bits/termios-c_cflag.h \
 ../sysdeps/unix/sysv/linux/bits/termios-c_lflag.h \
 ../sysdeps/unix/sysv/linux/bits/termios-tcflow.h \
 ../sysdeps/unix/sysv/linux/bits/termios-misc.h \
 ../sysdeps/unix/sysv/linux/sys/ttydefaults.h ../include/sys/ioctl.h \
 ../misc/sys/ioctl.h ../sysdeps/unix/sysv/linux/bits/ioctls.h \
 /usr/include/x86_64-linux-gnu/asm/ioctls.h \
 /usr/include/asm-generic/ioctls.h /usr/include/linux/ioctl.h \
 /usr/include/x86_64-linux-gnu/asm/ioctl.h \
 /usr/include/asm-generic/ioctl.h \
 ../sysdeps/unix/sysv/linux/bits/ioctl-types.h ../include/unistd.h \
 ../posix/unistd.h ../sysdeps/unix/sysv/linux/bits/posix_opt.h \
 ../sysdeps/unix/sysv/linux/x86/bits/environments.h ../bits/confname.h \
 ../include/bits/getopt_posix.h ../posix/bits/getopt_posix.h \
 ../include/bits/getopt_core.h ../posix/bits/getopt_core.h \
 ../include/bits/unistd_ext.h \
 ../sysdeps/unix/sysv/linux/bits/unistd_ext.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/generic/libc-symver.h:

../sysdeps/generic/symbol-hacks.h:

../support/tty.h:

../support/check.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../include/features.h:

../include/features-time64.h:

../sysdeps/unix/sysv/linux/features-time64.h:

../sysdeps/x86/bits/wordsize.h:

../sysdeps/unix/sysv/linux/x86/bits/timesize.h:

../include/gnu/stubs.h:

../sysdeps/ieee754/ldbl-96/bits/long-double.h:

../support/support.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h:

../include/stdint.h:

../stdlib/stdint.h:

../bits/libc-header-start.h:

../include/bits/types.h:

../posix/bits/types.h:

../sysdeps/unix/sysv/linux/x86/bits/typesizes.h:

../bits/time64.h:

../bits/wchar.h:

../bits/stdint-intn.h:

../bits/stdint-uintn.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h:

../include/sys/stat.h:

../io/sys/stat.h:

../include/bits/types/struct_timespec.h:

../time/bits/types/struct_timespec.h:

../include/bits/endian.h:

../string/bits/endian.h:

../sysdeps/x86/bits/endianness.h:

../include/bits/types/time_t.h:

../time/bits/types/time_t.h:

../sysdeps/unix/sysv/linux/bits/stat.h:

../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h:

../include/bits/statx.h:

../io/bits/statx.h:

../include/bits/statx-generic.h:

../io/bits/statx-generic.h:

../include/bits/types/struct_statx_timestamp.h:

../io/bits/types/struct_statx_timestamp.h:

../include/bits/types/struct_statx.h:

../io/bits/types/struct_statx.h:

../sysdeps/unix/sysv/linux/x86/xstatver.h:

../include/struct___timespec64.h:

../sysdeps/unix/sysv/linux/struct_stat_time64.h:

../include/sys/types.h:

../posix/sys/types.h:

../include/bits/types/clock_t.h:

../time/bits/types/clock_t.h:

../include/bits/types/clockid_t.h:

../time/bits/types/clockid_t.h:

../include/bits/types/timer_t.h:

../time/bits/types/timer_t.h:

../include/endian.h:

../string/endian.h:

../bits/byteswap.h:

../bits/uintn-identity.h:

../include/sys/select.h:

../misc/sys/select.h:

../bits/select.h:

../include/bits/types/sigset_t.h:

../signal/bits/types/sigset_t.h:

../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h:

../include/bits/types/struct_timeval.h:

../time/bits/types/struct_timeval.h:

../sysdeps/nptl/bits/pthreadtypes.h:

../sysdeps/nptl/bits/thread-shared-types.h:

../sysdeps/x86/nptl/bits/pthreadtypes-arch.h:

../sysdeps/x86/nptl/bits/struct_mutex.h:

../sysdeps/x86/nptl/bits/struct_rwlock.h:

../include/locale.h:

../locale/locale.h:

../include/bits/locale.h:

../locale/bits/locale.h:

../include/bits/types/locale_t.h:

../locale/bits/types/locale_t.h:

../include/bits/types/__locale_t.h:

../locale/bits/types/__locale_t.h:

../include/errno.h:

../stdlib/errno.h:

../sysdeps/unix/sysv/linux/bits/errno.h:

/usr/include/linux/errno.h:

/usr/include/x86_64-linux-gnu/asm/errno.h:

/usr/include/asm-generic/errno.h:

/usr/include/asm-generic/errno-base.h:

../bits/types/error_t.h:

../include/stdlib.h:

../sysdeps/x86/bits/floatn.h:

../bits/floatn-common.h:

../stdlib/stdlib.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/alloca.h:

../stdlib/alloca.h:

../include/stackinfo.h:

../sysdeps/x86_64/stackinfo.h:

../include/elf.h:

../elf/elf.h:

../include/libc-pointer-arith.h:

../sysdeps/generic/dl-dtprocnum.h:

../sysdeps/pthread/allocalim.h:

../include/limits.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h:

../include/bits/posix1_lim.h:

../posix/bits/posix1_lim.h:

../sysdeps/unix/sysv/linux/bits/local_lim.h:

/usr/include/linux/limits.h:

../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h:

../sysdeps/unix/sysv/linux/bits/pthread_stack_min.h:

../include/bits/posix2_lim.h:

../posix/bits/posix2_lim.h:

../include/bits/xopen_lim.h:

../sysdeps/unix/sysv/linux/bits/uio_lim.h:

../include/bits/stdlib-float.h:

../stdlib/bits/stdlib-float.h:

../include/rtld-malloc.h:

../include/string.h:

../sysdeps/x86/string_private.h:

../string/string.h:

../include/strings.h:

../string/strings.h:

../include/fcntl.h:

../io/fcntl.h:

../sysdeps/unix/sysv/linux/x86/bits/fcntl.h:

../sysdeps/unix/sysv/linux/bits/fcntl-linux.h:

../include/bits/types/struct_iovec.h:

../misc/bits/types/struct_iovec.h:

/usr/include/linux/falloc.h:

../include/termios.h:

../termios/termios.h:

../sysdeps/unix/sysv/linux/bits/termios.h:

../sysdeps/unix/sysv/linux/bits/termios-struct.h:

../sysdeps/unix/sysv/linux/bits/termios-c_cc.h:

../sysdeps/unix/sysv/linux/bits/termios-c_iflag.h:

../sysdeps/unix/sysv/linux/bits/termios-c_oflag.h:

../sysdeps/unix/sysv/linux/bits/termios-baud.h:

../sysdeps/unix/sysv/linux/bits/termios-c_cflag.h:

../sysdeps/unix/sysv/linux/bits/termios-c_lflag.h:

../sysdeps/unix/sysv/linux/bits/termios-tcflow.h:

../sysdeps/unix/sysv/linux/bits/termios-misc.h:

../sysdeps/unix/sysv/linux/sys/ttydefaults.h:

../include/sys/ioctl.h:

../misc/sys/ioctl.h:

../sysdeps/unix/sysv/linux/bits/ioctls.h:

/usr/include/x86_64-linux-gnu/asm/ioctls.h:

/usr/include/asm-generic/ioctls.h:

/usr/include/linux/ioctl.h:

/usr/include/x86_64-linux-gnu/asm/ioctl.h:

/usr/include/asm-generic/ioctl.h:

../sysdeps/unix/sysv/linux/bits/ioctl-types.h:

../include/unistd.h:

../posix/unistd.h:

../sysdeps/unix/sysv/linux/bits/posix_opt.h:

../sysdeps/unix/sysv/linux/x86/bits/environments.h:

../bits/confname.h:

../include/bits/getopt_posix.h:

../posix/bits/getopt_posix.h:

../include/bits/getopt_core.h:

../posix/bits/getopt_core.h:

../include/bits/unistd_ext.h:

../sysdeps/unix/sysv/linux/bits/unistd_ext.h:
