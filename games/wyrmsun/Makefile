# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/wyrmsun/Makefile 489384 2019-01-05 21:05:15Z amdmi3 $

PORTNAME=	wyrmsun
PORTVERSION=	3.5.1
DISTVERSIONPREFIX=	v
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Strategy game based on history, mythology and fiction

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/license.txt

RUN_DEPENDS=	wyrmgus:games/wyrmgus

USE_GITHUB=	yes
GH_ACCOUNT=	Andrettin
GH_PROJECT=	Wyrmsun

USES=		cmake gnome
INSTALLS_ICONS=	yes
NO_ARCH=	yes

PORTDATA=	*
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
