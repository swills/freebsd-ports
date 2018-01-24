# $FreeBSD: head/misc/mdp/Makefile 459681 2018-01-22 18:11:11Z rm $

PORTNAME=	mdp
PORTVERSION=	1.0.12
CATEGORIES=	misc

MAINTAINER=	neel@neelc.org
COMMENT=	Command-line based markdown presentation tool

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	visit1985

USES=		gmake ncurses
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=		DEBUG
DEBUG_MAKE_ARGS+=	DEBUG=1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mdp ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
