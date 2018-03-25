# Created by: Sean Bruno
# $FreeBSD: head/games/cockatrice/Makefile 465273 2018-03-22 08:47:23Z adridg $

PORTNAME=	Cockatrice
PORTVERSION=	0.0.g2017.11.19
PORTREVISION=	2
CATEGORIES=	games

MAINTAINER=	sbruno@FreeBSD.org
COMMENT=	Cross-platform virtual tabletop for multiplayer card games

LICENSE=	GPLv2

LIB_DEPENDS=	libprotobuf.so:devel/protobuf

USE_GITHUB=	yes
GH_TAGNAME=	2017-11-19-Release-2.4.0

USES=		cmake compiler:c++11-lib
USE_QT5=	buildtools concurrent core multimedia network printsupport \
		qmake svg linguisttools widgets gui

INSTALLS_ICONS=	yes
DATADIR=	${PREFIX}/share/${PORTNAME:tl}

.include <bsd.port.mk>
