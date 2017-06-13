# Created by: John Marino <marino@FreeBSD.org>
# $FreeBSD: head/lang/gnatdroid-x86/Makefile 439129 2017-04-21 20:25:00Z rene $

PORTNAME=	x86
PORTREVISION=	${X86_PR}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C/Ada cross-compiler, target: Android x86

DROID_TARGET=	i686-aux-linux-android
CPUVERSION=	x86_32
ARG_ARCH=	# don't specify
ARG_FPU=	# don't specify
ARG_FLOATSOFT=	# don't specify
SRPREFIX=	${LOCALBASE}/android-x86
SYSROOT=	gnatdroid-sysroot-x86
GDBINUTILS=	gnatdroid-binutils-x86
MASTERDIR=	${.CURDIR}/../../lang/gnatdroid-armv7
DESCR=		${.CURDIR}/pkg-descr

.include "${MASTERDIR}/Makefile"
