# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/games/julius/Makefile 485682 2018-11-23 15:45:28Z swills $

PORTNAME=	julius
PORTVERSION=	1.0.0
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	games
PKGNAMESUFFIX=	-caesariii

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	Open source re-implementation of Caesar III

LICENSE=	GPLv3

USES=		cmake:outsource

USE_GITHUB=	yes
GH_ACCOUNT=	bvschaik

USE_SDL=	mixer2 sdl2

SUB_FILES=	pkg-message

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
