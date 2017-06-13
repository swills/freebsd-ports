# Created by: Tassilo Philipp <tphilipp@potion-studios.com>
# $FreeBSD: head/devel/psptoolchain-gcc-stage2/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTREVISION=		3

PKGNAMESUFFIX=		-stage2

MAINTAINER=		tphilipp@potion-studios.com

BUILD_DEPENDS=		${LOCALBASE}/psp/lib/libc.a:devel/psptoolchain-newlib

MAKE_ENV=		CFLAGS_FOR_TARGET="-G0" PATH=${PREFIX}/bin:${PATH}
CONFIGURE_ARGS=		--prefix=${PREFIX} \
			--target="psp" \
			--enable-languages="c,c++" \
			--enable-lto \
			--with-newlib \
			--with-gmp=${LOCALBASE} \
			--with-mpfr \
			--disable-libssp \
			--disable-nls \
			--enable-cxx-flags="-G0" \
			--with-ld=${LOCALBASE}/bin/psp-ld \
			--with-as=${LOCALBASE}/bin/psp-as \
			--mandir=${PREFIX}/man

PLIST=			${.CURDIR}/pkg-plist
MASTERDIR=		${.CURDIR}/../psptoolchain-gcc-stage1

.include "${MASTERDIR}/Makefile"
