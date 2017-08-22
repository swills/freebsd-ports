# $FreeBSD: head/textproc/easydiff/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	easydiff
PORTVERSION=	0.4.0
PORTREVISION=	5
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
