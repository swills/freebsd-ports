# $FreeBSD: head/textproc/easydiff/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	easydiff
PORTVERSION=	0.4.0
PORTREVISION=	7
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
