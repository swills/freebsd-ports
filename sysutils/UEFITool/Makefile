# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/sysutils/UEFITool/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	UEFITool
PORTVERSION=	40
PORTREVISION=	1
DISTVERSIONPREFIX=	A
CATEGORIES=	sysutils

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	UEFI images parser

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	LongSoft

WRKSRC_SUBDIR=		${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

USES=		qmake:outsource
USE_GL=		gl
USE_QT5=	buildtools_build core gui widgets qmake_build

pre-install:
	${STRIP_CMD} ${WRKDIR}/.build/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/.build/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
