# Created by: James Bailie <jimmy@mammothcheese.ca>
# $FreeBSD: head/devel/libserver/Makefile 423885 2016-10-12 19:14:07Z pawel $

PORTNAME=	libserver
PORTVERSION=	3.17
CATEGORIES=	devel
MASTER_SITES=	http://www.mammothcheese.ca/

MAINTAINER=	jimmy@mammothcheese.ca
COMMENT=	Generic TCP server in a library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_LDCONFIG=	yes

MAKE_ENV+=	STAGEDIR=${STAGEDIR}
PLIST_SUB+=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
