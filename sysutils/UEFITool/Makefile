# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/sysutils/UEFITool/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	UEFITool
DISTVERSIONPREFIX=	A
DISTVERSION=	51
CATEGORIES=	sysutils

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	UEFI images parser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/../LICENSE.md

USES=		qmake:outsource qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	LongSoft
USE_GL=		gl
USE_QT=		core gui widgets buildtools_build qmake_build

WRKSRC_SUBDIR=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
