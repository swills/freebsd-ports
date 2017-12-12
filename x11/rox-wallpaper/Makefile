# $FreeBSD: head/x11/rox-wallpaper/Makefile 455913 2017-12-10 20:48:45Z antoine $

PORTNAME=	rox-wallpaper
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	SF/rox/Wallpaper/${PORTVERSION}
DISTNAME=	Wallpaper-${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Wallpaper management tool for the ROX desktop

RUN_DEPENDS=	${LOCALBASE}/bin/rox:x11-fm/rox-filer \
		${PYTHON_PKGNAMEPREFIX}roxlib>=0:devel/py-roxlib

USES=		python:2.7

WRKSRC=		${WRKDIR}/Wallpaper

do-build:
	@${PYTHON_CMD} -m compileall ${WRKSRC}
	@${PYTHON_CMD} -O -m compileall ${WRKSRC}

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/apps
	${CP} -r ${WRKSRC} ${STAGEDIR}${PREFIX}/apps/Wallpaper

.include <bsd.port.mk>
