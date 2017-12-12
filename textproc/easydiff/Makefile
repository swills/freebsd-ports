# $FreeBSD: head/textproc/easydiff/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	easydiff
PORTVERSION=	0.4.0
PORTREVISION=	6
CATEGORIES=	textproc gnustep
MASTER_SITES=	GNUSTEP/usr-apps
DISTNAME=	EasyDiff-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep graphical diff

LICENSE=	GPLv2+ # COPYING has GPLv3

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/EasyDiff.app/EasyDiff

.include <bsd.port.mk>
