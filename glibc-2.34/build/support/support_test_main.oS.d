$(common-objpfx)support/support_test_main.oS: \
 support_test_main.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../support/test-driver.h ../include/sys/cdefs.h ../misc/sys/cdefs.h \
 ../include/features.h ../include/features-time64.h \
 ../sysdeps/unix/sysv/linux/features-time64.h \
 ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/unix/sysv/linux/x86/bits/timesize.h ../include/gnu/stubs.h \
 ../sysdeps/ieee754/ldbl-96/bits/long-double.h ../support/check.h \
 ../support/temp_file-internal.h ../include/stdio.h \
 ../sysdeps/x86/bits/floatn.h ../bits/floatn-common.h ../libio/stdio.h \
 ../bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h ../include/bits/types.h \
 ../posix/bits/types.h ../sysdeps/unix/sysv/linux/x86/bits/typesizes.h \
 ../bits/time64.h ../include/bits/types/__fpos_t.h \
 ../libio/bits/types/__fpos_t.h ../include/bits/types/__mbstate_t.h \
 ../wcsmbs/bits/types/__mbstate_t.h ../include/bits/types/__fpos64_t.h \
 ../libio/bits/types/__fpos64_t.h ../include/bits/types/__FILE.h \
 ../libio/bits/types/__FILE.h ../include/bits/types/FILE.h \
 ../libio/bits/types/FILE.h ../include/bits/types/struct_FILE.h \
 ../libio/bits/types/struct_FILE.h \
 ../include/bits/types/cookie_io_functions_t.h \
 ../libio/bits/types/cookie_io_functions_t.h \
 $(common-objpfx)bits/stdio_lim.h \
 ../libio/libio.h ../include/bits/types/wint_t.h \
 ../wcsmbs/bits/types/wint_t.h ../include/gconv.h ../iconv/gconv.h \
 ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h \
 ../support/support.h /usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h \
 ../include/stdint.h ../stdlib/stdint.h ../bits/wchar.h \
 ../bits/stdint-intn.h ../bits/stdint-uintn.h ../include/sys/stat.h \
 ../io/sys/stat.h ../include/bits/types/struct_timespec.h \
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
 ../include/assert.h ../assert/assert.h ../include/errno.h \
 ../stdlib/errno.h ../sysdeps/unix/sysv/linux/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/x86_64-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 ../bits/types/error_t.h ../include/getopt.h ../posix/getopt.h \
 ../include/bits/getopt_core.h ../posix/bits/getopt_core.h \
 ../include/bits/getopt_ext.h ../posix/bits/getopt_ext.h \
 ../include/malloc.h ../malloc/malloc.h ../include/rtld-malloc.h \
 ../include/signal.h ../signal/signal.h ../bits/signum-generic.h \
 ../sysdeps/unix/sysv/linux/bits/signum-arch.h \
 ../include/bits/types/sig_atomic_t.h ../signal/bits/types/sig_atomic_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h \
 ../include/bits/types/__sigval_t.h ../signal/bits/types/__sigval_t.h \
 ../sysdeps/unix/sysv/linux/x86/bits/siginfo-arch.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-consts.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h \
 ../include/bits/types/sigval_t.h ../signal/bits/types/sigval_t.h \
 ../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h \
 ../sysdeps/unix/sysv/linux/bits/sigevent-consts.h \
 ../sysdeps/unix/sysv/linux/bits/sigaction.h \
 ../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h \
 ../sysdeps/unix/sysv/linux/bits/types/stack_t.h \
 ../sysdeps/unix/sysv/linux/x86/sys/ucontext.h ../include/bits/sigstack.h \
 ../sysdeps/unix/sysv/linux/x86/include/bits/sigstack.h \
 ../sysdeps/unix/sysv/linux/bits/sigstack.h ../include/bits/sigstksz.h \
 ../sysdeps/unix/sysv/linux/bits/sigstksz.h ../include/unistd.h \
 ../posix/unistd.h ../sysdeps/unix/sysv/linux/bits/posix_opt.h \
 ../sysdeps/unix/sysv/linux/x86/bits/environments.h ../bits/confname.h \
 ../include/bits/getopt_posix.h ../posix/bits/getopt_posix.h \
 ../include/bits/unistd_ext.h \
 ../sysdeps/unix/sysv/linux/bits/unistd_ext.h \
 ../sysdeps/unix/sysv/linux/bits/ss_flags.h \
 ../include/bits/types/struct_sigstack.h \
 ../signal/bits/types/struct_sigstack.h \
 ../sysdeps/pthread/bits/sigthread.h \
 ../sysdeps/unix/sysv/linux/bits/signal_ext.h \
 ../sysdeps/unix/sysv/linux/sigsetops.h ../include/limits.h \
 /usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../sysdeps/unix/sysv/linux/bits/local_lim.h /usr/include/linux/limits.h \
 ../sysdeps/unix/sysv/linux/include/bits/pthread_stack_min-dynamic.h \
 ../sysdeps/unix/sysv/linux/bits/pthread_stack_min.h \
 ../include/bits/posix2_lim.h ../posix/bits/posix2_lim.h \
 ../include/bits/xopen_lim.h ../sysdeps/unix/sysv/linux/bits/uio_lim.h \
 ../include/libc-pointer-arith.h ../include/stdlib.h ../stdlib/stdlib.h \
 ../sysdeps/unix/sysv/linux/bits/waitflags.h ../bits/waitstatus.h \
 ../include/alloca.h ../stdlib/alloca.h ../include/stackinfo.h \
 ../sysdeps/x86_64/stackinfo.h ../include/elf.h ../elf/elf.h \
 ../sysdeps/generic/dl-dtprocnum.h ../sysdeps/pthread/allocalim.h \
 ../include/bits/stdlib-float.h ../stdlib/bits/stdlib-float.h \
 ../include/string.h ../sysdeps/x86/string_private.h ../string/string.h \
 ../include/strings.h ../string/strings.h ../include/sys/param.h \
 ../misc/sys/param.h ../sysdeps/unix/sysv/linux/bits/param.h \
 /usr/include/linux/param.h /usr/include/x86_64-linux-gnu/asm/param.h \
 /usr/include/asm-generic/param.h ../include/sys/resource.h \
 ../resource/sys/resource.h ../sysdeps/unix/sysv/linux/bits/resource.h \
 ../include/bits/types/struct_rusage.h \
 ../resource/bits/types/struct_rusage.h ../include/time.h ../time/time.h \
 ../sysdeps/unix/sysv/linux/bits/time.h \
 ../sysdeps/unix/sysv/linux/bits/timex.h \
 ../include/bits/types/struct_tm.h ../time/bits/types/struct_tm.h \
 ../include/bits/types/struct_itimerspec.h \
 ../time/bits/types/struct_itimerspec.h ../include/struct___timeval64.h \
 ../time/mktime-internal.h ../include/sys/time.h ../time/sys/time.h \
 ../sysdeps/unix/sysv/linux/time-clockid.h ../include/sys/wait.h \
 ../posix/sys/wait.h xstdio.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/generic/libc-symver.h:

../sysdeps/generic/symbol-hacks.h:

../support/test-driver.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../include/features.h:

../include/features-time64.h:

../sysdeps/unix/sysv/linux/features-time64.h:

../sysdeps/x86/bits/wordsize.h:

../sysdeps/unix/sysv/linux/x86/bits/timesize.h:

../include/gnu/stubs.h:

../sysdeps/ieee754/ldbl-96/bits/long-double.h:

../support/check.h:

../support/temp_file-internal.h:

../include/stdio.h:

../sysdeps/x86/bits/floatn.h:

../bits/floatn-common.h:

../libio/stdio.h:

../bits/libc-header-start.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h:

../include/bits/types.h:

../posix/bits/types.h:

../sysdeps/unix/sysv/linux/x86/bits/typesizes.h:

../bits/time64.h:

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

../libio/libio.h:

../include/bits/types/wint_t.h:

../wcsmbs/bits/types/wint_t.h:

../include/gconv.h:

../iconv/gconv.h:

../include/shlib-compat.h:

$(common-objpfx)abi-versions.h:

../support/support.h:

/usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h:

../include/stdint.h:

../stdlib/stdint.h:

../bits/wchar.h:

../bits/stdint-intn.h:

../bits/stdint-uintn.h:

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

../include/assert.h:

../assert/assert.h:

../include/errno.h:

../stdlib/errno.h:

../sysdeps/unix/sysv/linux/bits/errno.h:

/usr/include/linux/errno.h:

/usr/include/x86_64-linux-gnu/asm/errno.h:

/usr/include/asm-generic/errno.h:

/usr/include/asm-generic/errno-base.h:

../bits/types/error_t.h:

../include/getopt.h:

../posix/getopt.h:

../include/bits/getopt_core.h:

../posix/bits/getopt_core.h:

../include/bits/getopt_ext.h:

../posix/bits/getopt_ext.h:

../include/malloc.h:

../malloc/malloc.h:

../include/rtld-malloc.h:

../include/signal.h:

../signal/signal.h:

../bits/signum-generic.h:

../sysdeps/unix/sysv/linux/bits/signum-arch.h:

../include/bits/types/sig_atomic_t.h:

../signal/bits/types/sig_atomic_t.h:

../sysdeps/unix/sysv/linux/bits/types/siginfo_t.h:

../include/bits/types/__sigval_t.h:

../signal/bits/types/__sigval_t.h:

../sysdeps/unix/sysv/linux/x86/bits/siginfo-arch.h:

../sysdeps/unix/sysv/linux/bits/siginfo-consts.h:

../sysdeps/unix/sysv/linux/bits/siginfo-consts-arch.h:

../include/bits/types/sigval_t.h:

../signal/bits/types/sigval_t.h:

../sysdeps/unix/sysv/linux/bits/types/sigevent_t.h:

../sysdeps/unix/sysv/linux/bits/sigevent-consts.h:

../sysdeps/unix/sysv/linux/bits/sigaction.h:

../sysdeps/unix/sysv/linux/x86/bits/sigcontext.h:

../sysdeps/unix/sysv/linux/bits/types/stack_t.h:

../sysdeps/unix/sysv/linux/x86/sys/ucontext.h:

../include/bits/sigstack.h:

../sysdeps/unix/sysv/linux/x86/include/bits/sigstack.h:

../sysdeps/unix/sysv/linux/bits/sigstack.h:

../include/bits/sigstksz.h:

../sysdeps/unix/sysv/linux/bits/sigstksz.h:

../include/unistd.h:

../posix/unistd.h:

../sysdeps/unix/sysv/linux/bits/posix_opt.h:

../sysdeps/unix/sysv/linux/x86/bits/environments.h:

../bits/confname.h:

../include/bits/getopt_posix.h:

../posix/bits/getopt_posix.h:

../include/bits/unistd_ext.h:

../sysdeps/unix/sysv/linux/bits/unistd_ext.h:

../sysdeps/unix/sysv/linux/bits/ss_flags.h:

../include/bits/types/struct_sigstack.h:

../signal/bits/types/struct_sigstack.h:

../sysdeps/pthread/bits/sigthread.h:

../sysdeps/unix/sysv/linux/bits/signal_ext.h:

../sysdeps/unix/sysv/linux/sigsetops.h:

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

../include/libc-pointer-arith.h:

../include/stdlib.h:

../stdlib/stdlib.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/alloca.h:

../stdlib/alloca.h:

../include/stackinfo.h:

../sysdeps/x86_64/stackinfo.h:

../include/elf.h:

../elf/elf.h:

../sysdeps/generic/dl-dtprocnum.h:

../sysdeps/pthread/allocalim.h:

../include/bits/stdlib-float.h:

../stdlib/bits/stdlib-float.h:

../include/string.h:

../sysdeps/x86/string_private.h:

../string/string.h:

../include/strings.h:

../string/strings.h:

../include/sys/param.h:

../misc/sys/param.h:

../sysdeps/unix/sysv/linux/bits/param.h:

/usr/include/linux/param.h:

/usr/include/x86_64-linux-gnu/asm/param.h:

/usr/include/asm-generic/param.h:

../include/sys/resource.h:

../resource/sys/resource.h:

../sysdeps/unix/sysv/linux/bits/resource.h:

../include/bits/types/struct_rusage.h:

../resource/bits/types/struct_rusage.h:

../include/time.h:

../time/time.h:

../sysdeps/unix/sysv/linux/bits/time.h:

../sysdeps/unix/sysv/linux/bits/timex.h:

../include/bits/types/struct_tm.h:

../time/bits/types/struct_tm.h:

../include/bits/types/struct_itimerspec.h:

../time/bits/types/struct_itimerspec.h:

../include/struct___timeval64.h:

../time/mktime-internal.h:

../include/sys/time.h:

../time/sys/time.h:

../sysdeps/unix/sysv/linux/time-clockid.h:

../include/sys/wait.h:

../posix/sys/wait.h:

xstdio.h:
