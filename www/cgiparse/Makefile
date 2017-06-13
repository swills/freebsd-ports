# Created by: jmg
# $FreeBSD: head/www/cgiparse/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	cgiparse
PORTVERSION=	0.9b
CATEGORIES=	www devel
MASTER_SITES=	http://resnet.uoregon.edu/~gurney_j/jmpc/dist/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C library to parse CGI Forms

LIB_DEPENDS=	libmime.so:devel/mime

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CFLAGS+=	"-fPIC"

.include <bsd.port.pre.mk>

post-install:
	${LN} -sf libcgiparse.so.1 ${STAGEDIR}${PREFIX}/lib/libcgiparse.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libcgiparse.so

.include <bsd.port.post.mk>
