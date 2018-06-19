# $FreeBSD: head/sysutils/tarsnap-gui/Makefile 472053 2018-06-09 14:01:51Z swills $

PORTNAME=	tarsnap-gui
PORTVERSION=	1.0.1
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Cross platform GUI for the Tarsnap command line client

USE_GITHUB=	yes
GH_ACCOUNT=	Tarsnap

USES=		compiler:c++11-lib qmake
USE_QT5=	buildtools_build core gui network qmake_build sql sql-sqlite3 widgets
USE_GL=		gl

PLIST_FILES=	bin/tarsnap-gui

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tarsnap-gui ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
