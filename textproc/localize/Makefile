# $FreeBSD: head/textproc/localize/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	localize
PORTVERSION=	0.0.1
PORTREVISION=	7
CATEGORIES=	textproc gnustep
MASTER_SITES=	http://www.eskimo.com/~pburns/Localize/files/
DISTNAME=	Localize-20040424

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application to aid in the translation of .strings files

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/Localize

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Localize.app/Localize

.include <bsd.port.mk>
