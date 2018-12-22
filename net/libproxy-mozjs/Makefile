# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/net/libproxy-mozjs/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTREVISION=	2
CATEGORIES=	net www
PKGNAMESUFFIX=	-${LIBPROXY_SLAVE}


COMMENT=	Mozilla JavaScript plug-in for libproxy

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11
LIB_DEPENDS=	libmozjs-38.so:lang/spidermonkey38

LIBPROXY_SLAVE=	mozjs
MASTERDIR=	${.CURDIR}/../libproxy

.include "${MASTERDIR}/Makefile"
