# Created by: Tassilo Philipp <tphilipp@potion-studios.com>
# $FreeBSD: head/devel/psptoolchain-pspsdk-stage2/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTREVISION=		2

PKGNAMESUFFIX=		-stage2

MAINTAINER=		tphilipp@potion-studios.com
COMMENT=		PlayStation Portable development toolchain ${PORTNAME}

BUILD_DEPENDS=		psp-cpp:devel/psptoolchain-gcc-stage2 \
			psp-gcc:devel/psptoolchain-gcc-stage2 \
			psp-gcov:devel/psptoolchain-gcc-stage2 \
			psp-g++:devel/psptoolchain-gcc-stage2 \
			psp-ar:devel/psptoolchain-binutils \
			${LOCALBASE}/psp/lib/libc.a:devel/psptoolchain-newlib

CONFIGURE_ARGS=		--prefix=${PREFIX} --with-pspdev="${LOCALBASE}"

PLIST=			${.CURDIR}/pkg-plist
MASTERDIR=		${.CURDIR}/../psptoolchain-pspsdk-stage1

.include "${MASTERDIR}/Makefile"
