# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/net/libproxy-mozjs/Makefile 473062 2018-06-22 19:59:41Z tcberner $

PORTREVISION=	0
CATEGORIES=	net www
PKGNAMESUFFIX=	-${LIBPROXY_SLAVE}


COMMENT=	Mozilla JavaScript plug-in for libproxy

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11
LIB_DEPENDS=	libmozjs-38.so:lang/spidermonkey38

LIBPROXY_SLAVE=	mozjs
MASTERDIR=	${.CURDIR}/../libproxy

.include "${MASTERDIR}/Makefile"
