# Created by: Konstantin Lepa <konstantin.lepa@gmail.com>
# $FreeBSD: head/devel/vxlog/Makefile 472438 2018-06-15 09:34:33Z amdmi3 $

PORTNAME=	vxlog
PORTVERSION=	1.0.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://bitbucket.org/klepa/vxlog/downloads/ \
		SF/${PORTNAME}

MAINTAINER=	konstantin.lepa@gmail.com
COMMENT=	C++ logging library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/doc/COPYING.txt

USES=		cmake
USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DTESTING:BOOL=OFF

.include <bsd.port.mk>
