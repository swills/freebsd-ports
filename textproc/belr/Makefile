# $FreeBSD: head/textproc/belr/Makefile 482777 2018-10-22 19:23:52Z tijl $

PORTNAME=	belr
PORTVERSION=	0.1.3
CATEGORIES=	textproc
MASTER_SITES=	https://www.linphone.org/releases/sources/belr/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Language recognition library

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libbctoolbox.so:net/bctoolbox

USES=		cmake:outsource compiler:c++11-lib
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DENABLE_STATIC=NO -DENABLE_STRICT=NO
WRKSRC= 	${WRKDIR}/${DISTNAME}-0

.include <bsd.port.mk>
