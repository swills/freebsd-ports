# Created by: Andriy Gapon <avg@icyb.net.ua>
# $FreeBSD: head/deskutils/charmtimetracker/Makefile 478671 2018-09-01 10:38:51Z adridg $

PORTNAME=	charmtimetracker
DISTVERSION=	1.12.0
PORTREVISION=	0
CATEGORIES=	deskutils

# PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Time tracker

# The top-level license file is GPLv2, but all the sources say
# (at your option) GPLv2+ .
LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqt5keychain.so:security/qtkeychain@qt5

USES=		cmake:outsource compiler:c++11-lib pkgconfig qt:5
CMAKE_ARGS=	-DCharm_VERSION:STRING=${PORTVERSION}

USE_GITHUB=	yes
GH_ACCOUNT=	KDAB
GH_PROJECT=	Charm

USE_QT=		core dbus gui \
		network printsupport script sql sql-sqlite3 \
		testlib widgets xml \
		buildtools_build qmake_build
USE_XORG=	ice x11 xcb xext xscrnsaver

.include <bsd.port.mk>
