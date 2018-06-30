# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/searchmonkey/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	searchmonkey
PORTVERSION=	2.0.0
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/Searchmonkey2/${PORTVERSION}%20%5Bstable%5D
DISTNAME=	${PORTNAME}_v${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Search using regexes for file names and text

LICENSE=	GPLv3+

USES=		qmake dos2unix qt:4 zip
DOS2UNIX_GLOB=	*.cpp *.h
USE_QT=		corelib gui moc_build rcc_build uic_build

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
