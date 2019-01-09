# $FreeBSD: head/devel/cpptest/Makefile 489606 2019-01-07 18:57:24Z fernape $

PORTNAME=	cpptest
PORTVERSION=	2.0.0
CATEGORIES=	devel

MAINTAINER=	fernape@FreeBSD.org
COMMENT=	Unit testing framework for handling automated tests in C++

LICENSE=	LGPL3

USES=		autoreconf gmake libtool pathfix
USE_GITHUB=	yes
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
MAKE_ARGS=	CC=${CC} CCC=${CXX}

.include <bsd.port.mk>
