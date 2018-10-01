# $FreeBSD: head/news/lusernet/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	lusernet
PORTVERSION=	0.4.2
PORTREVISION=	9
CATEGORIES=	news gnustep
MASTER_SITES=	LOCAL/dinoex
DISTNAME=	LuserNET-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep news reader

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build
LIB_DEPENDS=	libPantomime.so:mail/pantomime

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/LuserNET.app/LuserNET

.include <bsd.port.mk>
