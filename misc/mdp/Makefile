# $FreeBSD: head/misc/mdp/Makefile 425447 2016-11-05 20:27:11Z pi $

PORTNAME=	mdp
PORTVERSION=	1.0.9
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
