# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/endless-sky-high-dpi/Makefile 448469 2017-08-21 12:44:52Z amdmi3 $

PORTNAME=	endless-sky-high-dpi
PORTVERSION=	0.9.8
DISTVERSIONPREFIX=	v
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	High-DPI graphics for Endless Sky

LICENSE=	CC-BY-3.0 CC-BY-SA-3.0 CC-BY-SA-4.0 PD
LICENSE_COMB=	multi

RUN_DEPENDS=	endless-sky:games/endless-sky

USE_GITHUB=	yes
GH_ACCOUNT=	endless-sky

DATADIR=	${PREFIX}/share/endless-sky/plugins/${PORTNAME}

NO_BUILD=	yes
NO_ARCH=	yes

PORTDATA=	*

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} "images" ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
