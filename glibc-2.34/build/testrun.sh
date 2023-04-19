#!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
cat << EOF
Usage: $0 [OPTIONS] <program> [ARGUMENTS...]

  --tool=TOOL  Run with the specified TOOL. It can be strace, valgrind or
               container. The container will run within support/test-container.
EOF

  exit 1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux-x86-64.so.2 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace)
    exec strace  -EGCONV_PATH=/workspaces/Portefolio/glibc-2.34/build/iconvdata  -ELOCPATH=/workspaces/Portefolio/glibc-2.34/build/localedata  -ELC_ALL=C  /workspaces/Portefolio/glibc-2.34/build/elf/ld-linux-x86-64.so.2 --library-path /workspaces/Portefolio/glibc-2.34/build:/workspaces/Portefolio/glibc-2.34/build/math:/workspaces/Portefolio/glibc-2.34/build/elf:/workspaces/Portefolio/glibc-2.34/build/dlfcn:/workspaces/Portefolio/glibc-2.34/build/nss:/workspaces/Portefolio/glibc-2.34/build/nis:/workspaces/Portefolio/glibc-2.34/build/rt:/workspaces/Portefolio/glibc-2.34/build/resolv:/workspaces/Portefolio/glibc-2.34/build/mathvec:/workspaces/Portefolio/glibc-2.34/build/support:/workspaces/Portefolio/glibc-2.34/build/crypt:/workspaces/Portefolio/glibc-2.34/build/nptl ${1+"$@"}
    ;;
  valgrind)
    exec env GCONV_PATH=/workspaces/Portefolio/glibc-2.34/build/iconvdata LOCPATH=/workspaces/Portefolio/glibc-2.34/build/localedata LC_ALL=C valgrind  /workspaces/Portefolio/glibc-2.34/build/elf/ld-linux-x86-64.so.2 --library-path /workspaces/Portefolio/glibc-2.34/build:/workspaces/Portefolio/glibc-2.34/build/math:/workspaces/Portefolio/glibc-2.34/build/elf:/workspaces/Portefolio/glibc-2.34/build/dlfcn:/workspaces/Portefolio/glibc-2.34/build/nss:/workspaces/Portefolio/glibc-2.34/build/nis:/workspaces/Portefolio/glibc-2.34/build/rt:/workspaces/Portefolio/glibc-2.34/build/resolv:/workspaces/Portefolio/glibc-2.34/build/mathvec:/workspaces/Portefolio/glibc-2.34/build/support:/workspaces/Portefolio/glibc-2.34/build/crypt:/workspaces/Portefolio/glibc-2.34/build/nptl ${1+"$@"}
    ;;
  container)
    exec env GCONV_PATH=/workspaces/Portefolio/glibc-2.34/build/iconvdata LOCPATH=/workspaces/Portefolio/glibc-2.34/build/localedata LC_ALL=C  /workspaces/Portefolio/glibc-2.34/build/elf/ld-linux-x86-64.so.2 --library-path /workspaces/Portefolio/glibc-2.34/build:/workspaces/Portefolio/glibc-2.34/build/math:/workspaces/Portefolio/glibc-2.34/build/elf:/workspaces/Portefolio/glibc-2.34/build/dlfcn:/workspaces/Portefolio/glibc-2.34/build/nss:/workspaces/Portefolio/glibc-2.34/build/nis:/workspaces/Portefolio/glibc-2.34/build/rt:/workspaces/Portefolio/glibc-2.34/build/resolv:/workspaces/Portefolio/glibc-2.34/build/mathvec:/workspaces/Portefolio/glibc-2.34/build/support:/workspaces/Portefolio/glibc-2.34/build/crypt:/workspaces/Portefolio/glibc-2.34/build/nptl /workspaces/Portefolio/glibc-2.34/build/support/test-container env GCONV_PATH=/workspaces/Portefolio/glibc-2.34/build/iconvdata LOCPATH=/workspaces/Portefolio/glibc-2.34/build/localedata LC_ALL=C  /workspaces/Portefolio/glibc-2.34/build/elf/ld-linux-x86-64.so.2 --library-path /workspaces/Portefolio/glibc-2.34/build:/workspaces/Portefolio/glibc-2.34/build/math:/workspaces/Portefolio/glibc-2.34/build/elf:/workspaces/Portefolio/glibc-2.34/build/dlfcn:/workspaces/Portefolio/glibc-2.34/build/nss:/workspaces/Portefolio/glibc-2.34/build/nis:/workspaces/Portefolio/glibc-2.34/build/rt:/workspaces/Portefolio/glibc-2.34/build/resolv:/workspaces/Portefolio/glibc-2.34/build/mathvec:/workspaces/Portefolio/glibc-2.34/build/support:/workspaces/Portefolio/glibc-2.34/build/crypt:/workspaces/Portefolio/glibc-2.34/build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
