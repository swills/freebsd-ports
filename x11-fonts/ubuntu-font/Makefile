# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: head/x11-fonts/ubuntu-font/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	ubuntu-font
PORTVERSION=	0.83
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	http://font.ubuntu.com/download/

DISTNAME=	${PORTNAME}-family-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ubuntu font family

LICENSE=	UFL
LICENSE_FILE=	${WRKSRC}/LICENCE.txt
LICENSE_NAME=	Ubuntu Font License (UFL)
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		fonts zip
NO_BUILD=	yes

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.txt ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
