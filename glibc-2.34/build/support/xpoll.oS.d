$(common-objpfx)support/xpoll.oS: xpoll.c \
 ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../support/xsocket.h ../include/poll.h ../include/sys/poll.h \
 ../io/sys/poll.h ../include/features.h ../include/features-time64.h \
 ../sysdeps/unix/sysv/linux/features-time64.h \
 ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/unix/sysv/linux/x86/bits/timesize.h ../include/sys/cdefs.h \
 ../misc/sys/cdefs.h ../sysdeps/ieee754/ldbl-96/bits/long-double.h \
 ../include/gnu/stubs.h ../sysdeps/unix/sysv/linux/bits/poll.h \
 ../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h \
 ../include/bits/types/struct_timespec.h \
 ../time/bits/types/struct_timespec.h ../include/bits/types.h \
 ../posix/bits/types.h ../sysdeps/unix/sysv/linux/x86/bits/typesizes.h \
 ../bits/time64.h ../include/bits/endian.h ../string/bits/endian.h \
 ../sysdeps/x86/bits/endianness.h ../include/bits/types/time_t.h \
 ../time/bits/types/time_t.h ../include/sys/socket.h \
 ../socket/sys/socket.h ../include/bits/types/struct_iovec.h \
 ../misc/bits/types/struct_iovec.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h ../include/sys/types.h \
 ../posix/sys/types.h ../include/bits/types/clock_t.h \
 ../time/bits/types/clock_t.h ../include/bits/types/clockid_t.h \
 ../time/bits/types/clockid_t.h ../include/bits/types/timer_t.h \
 ../time/bits/types/timer_t.h ../bits/stdint-intn.h ../include/endian.h \
 ../string/endian.h ../bits/byteswap.h ../bits/uintn-identity.h \
 ../include/sys/select.h ../misc/sys/select.h ../bits/select.h \
 ../include/bits/types/sigset_t.h ../signal/bits/types/sigset_t.h \
 ../include/bits/types/struct_timeval.h \
 ../time/bits/types/struct_timeval.h ../sysdeps/nptl/bits/pthreadtypes.h \
 ../sysdeps/nptl/bits/thread-shared-types.h \
 ../sysdeps/x86/nptl/bits/pthreadtypes-arch.h \
 ../sysdeps/x86/nptl/bits/struct_mutex.h \
 ../sysdeps/x86/nptl/bits/struct_rwlock.h \
 ../sysdeps/unix/sysv/linux/bits/socket_type.h ../bits/sockaddr.h \
 /usr/include/x86_64-linux-gnu/asm/socket.h \
 /usr/include/asm-generic/socket.h /usr/include/linux/posix_types.h \
 /usr/include/linux/stddef.h \
 /usr/include/x86_64-linux-gnu/asm/posix_types.h \
 /usr/include/x86_64-linux-gnu/asm/posix_types_64.h \
 /usr/include/asm-generic/posix_types.h \
 /usr/include/x86_64-linux-gnu/asm/bitsperlong.h \
 /usr/include/asm-generic/bitsperlong.h \
 /usr/include/x86_64-linux-gnu/asm/sockios.h \
 /usr/include/asm-generic/sockios.h \
 ../include/bits/types/struct_osockaddr.h \
 ../socket/bits/types/struct_osockaddr.h ../include/stdio.h \
 ../sysdeps/x86/bits/floatn.h ../bits/floatn-common.h ../libio/stdio.h \
 ../bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h \
 ../include/bits/types/__fpos_t.h ../libio/bits/types/__fpos_t.h \
 ../include/bits/types/__mbstate_t.h ../wcsmbs/bits/types/__mbstate_t.h \
 ../include/bits/types/__fpos64_t.h ../libio/bits/types/__fpos64_t.h \
 ../include/bits/types/__FILE.h ../libio/bits/types/__FILE.h \
 ../include/bits/types/FILE.h ../libio/bits/types/FILE.h \
 ../include/bits/types/struct_FILE.h ../libio/bits/types/struct_FILE.h \
 ../include/bits/types/cookie_io_functions_t.h \
 ../libio/bits/types/cookie_io_functions_t.h \
 $(common-objpfx)bits/stdio_lim.h \
 ../include/bits/stdio.h ../libio/bits/stdio.h ../libio/libio.h \
 ../include/bits/types/wint_t.h ../wcsmbs/bits/types/wint_t.h \
 ../include/gconv.h ../iconv/gconv.h ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h \
 ../include/stdlib.h ../stdlib/stdlib.h \
 ../sysdeps/unix/sysv/linux/bits/waitflags.h ../bits/waitstatus.h \
 ../include/bits/types/locale_t.h ../locale/bits/types/locale_t.h \
 ../include/bits/types/__locale_t.h ../locale/bits/types/__locale_t.h \
 ../include/alloca.h ../stdlib/alloca.h ../include/stackinfo.h \
 ../sysdeps/x86_64/stackinfo.h ../include/elf.h ../elf/elf.h \
 ../include/stdint.h ../stdlib/stdint.h ../bits/wchar.h \
 ../bits/stdint-uintn.h ../include/libc-pointer-arith.h \
 ../sysdeps/generic/dl-dtprocnum.h ../sysdeps/pthread/allocalim.h \
 ../include/limits.h /usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../sysdeps/unix/sysv/linux/bits/local_lim.h /usr/include/linux/limits.h \
 ../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h \
 ../sysdeps/unix/sysv/linux/bits/pthread_stack_min.h \
 ../include/bits/posix2_lim.h ../posix/bits/posix2_lim.h \
 ../include/bits/xopen_lim.h ../sysdeps/unix/sysv/linux/bits/uio_lim.h \
 ../bits/stdlib-bsearch.h ../include/bits/stdlib-float.h \
 ../stdlib/bits/stdlib-float.h ../include/sys/stat.h ../io/sys/stat.h \
 ../sysdeps/unix/sysv/linux/bits/stat.h \
 ../sysdeps/unix/sysv/linux/x86/bits/struct_stat.h \
 ../include/bits/statx.h ../io/bits/statx.h \
 ../include/bits/statx-generic.h ../io/bits/statx-generic.h \
 ../include/bits/types/struct_statx_timestamp.h \
 ../io/bits/types/struct_statx_timestamp.h \
 ../include/bits/types/struct_statx.h ../io/bits/types/struct_statx.h \
 ../sysdeps/unix/sysv/linux/x86/xstatver.h \
 ../include/struct___timespec64.h \
 ../sysdeps/unix/sysv/linux/struct_stat_time64.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h \
 ../include/rtld-malloc.h ../support/check.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/generic/libc-symver.h:

../sysdeps/generic/symbol-hacks.h:

../support/xsocket.h:

../include/poll.h:

../include/sys/poll.h:

../io/sys/poll.h:

../include/features.h:

../include/features-time64.h:

../sysdeps/unix/sysv/linux/features-time64.h:

../sysdeps/x86/bits/wordsize.h:

../sysdeps/unix/sysv/linux/x86/bits/timesize.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../sysdeps/ieee754/ldbl-96/bits/long-double.h:

../include/gnu/stubs.h:

../sysdeps/unix/sysv/linux/bits/poll.h:

../sysdeps/unix/sysv/linux/bits/types/__sigset_t.h:

../include/bits/types/struct_timespec.h:

../time/bits/types/struct_timespec.h:

../include/bits/types.h:

../posix/bits/types.h:

../sysdeps/unix/sysv/linux/x86/bits/typesizes.h:

../bits/time64.h:

../include/bits/endian.h:

../string/bits/endian.h:

../sysdeps/x86/bits/endianness.h:

../include/bits/types/time_t.h:

../time/bits/types/time_t.h:

../include/sys/socket.h:

../socket/sys/socket.h:

../include/bits/types/struct_iovec.h:

../misc/bits/types/struct_iovec.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h:

../sysdeps/unix/sysv/linux/bits/socket.h:

../include/sys/types.h:

../posix/sys/types.h:

../include/bits/types/clock_t.h:

../time/bits/types/clock_t.h:

../include/bits/types/clockid_t.h:

../time/bits/types/clockid_t.h:

../include/bits/types/timer_t.h:

../time/bits/types/timer_t.h:

../bits/stdint-intn.h:

../include/endian.h:

../string/endian.h:

../bits/byteswap.h:

../bits/uintn-identity.h:

../include/sys/select.h:

../misc/sys/select.h:

../bits/select.h:

../include/bits/types/sigset_t.h:

../signal/bits/types/sigset_t.h:

../include/bits/types/struct_timeval.h:

../time/bits/types/struct_timeval.h:

../sysdeps/nptl/bits/pthreadtypes.h:

../sysdeps/nptl/bits/thread-shared-types.h:

../sysdeps/x86/nptl/bits/pthreadtypes-arch.h:

../sysdeps/x86/nptl/bits/struct_mutex.h:

../sysdeps/x86/nptl/bits/struct_rwlock.h:

../sysdeps/unix/sysv/linux/bits/socket_type.h:

../bits/sockaddr.h:

/usr/include/x86_64-linux-gnu/asm/socket.h:

/usr/include/asm-generic/socket.h:

/usr/include/linux/posix_types.h:

/usr/include/linux/stddef.h:

/usr/include/x86_64-linux-gnu/asm/posix_types.h:

/usr/include/x86_64-linux-gnu/asm/posix_types_64.h:

/usr/include/asm-generic/posix_types.h:

/usr/include/x86_64-linux-gnu/asm/bitsperlong.h:

/usr/include/asm-generic/bitsperlong.h:

/usr/include/x86_64-linux-gnu/asm/sockios.h:

/usr/include/asm-generic/sockios.h:

../include/bits/types/struct_osockaddr.h:

../socket/bits/types/struct_osockaddr.h:

../include/stdio.h:

../sysdeps/x86/bits/floatn.h:

../bits/floatn-common.h:

../libio/stdio.h:

../bits/libc-header-start.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h:

../include/bits/types/__fpos_t.h:

../libio/bits/types/__fpos_t.h:

../include/bits/types/__mbstate_t.h:

../wcsmbs/bits/types/__mbstate_t.h:

../include/bits/types/__fpos64_t.h:

../libio/bits/types/__fpos64_t.h:

../include/bits/types/__FILE.h:

../libio/bits/types/__FILE.h:

../include/bits/types/FILE.h:

../libio/bits/types/FILE.h:

../include/bits/types/struct_FILE.h:

../libio/bits/types/struct_FILE.h:

../include/bits/types/cookie_io_functions_t.h:

../libio/bits/types/cookie_io_functions_t.h:

$(common-objpfx)bits/stdio_lim.h:

../include/bits/stdio.h:

../libio/bits/stdio.h:

../libio/libio.h:

../include/bits/types/wint_t.h:

../wcsmbs/bits/types/wint_t.h:

../include/gconv.h:

../iconv/gconv.h:

../include/shlib-compat.h:

$(common-objpfx)abi-versions.h:

../include/stdlib.h:

../stdlib/stdlib.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/bits/types/locale_t.h:

../locale/bits/types/locale_t.h:

../include/bits/types/__locale_t.h:

../locale/bits/types/__locale_t.h:

../include/alloca.h:

../stdlib/alloca.h:

../include/stackinfo.h:

../sysdeps/x86_64/stackinfo.h:

../include/elf.h:

../elf/elf.h:

../include/stdint.h:

../stdlib/stdint.h:

../bits/wchar.h:

../bits/stdint-uintn.h:

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

../bits/stdlib-bsearch.h:

../include/bits/stdlib-float.h:

../stdlib/bits/stdlib-float.h:

../include/sys/stat.h:

../io/sys/stat.h:

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

/usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h:

../include/rtld-malloc.h:

../support/check.h:
