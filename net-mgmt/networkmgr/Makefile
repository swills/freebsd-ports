# Created by: Eric Turgeon <ericturgeon.bsd@gmail.org>
# $FreeBSD: head/net-mgmt/networkmgr/Makefile 486925 2018-12-08 09:17:35Z antoine $

PORTNAME=	networkmgr
DISTVERSION=	3.0
CATEGORIES=	net-mgmt

MAINTAINER=	ericbsd@FreeBSD.org
COMMENT=	FreeBSD/GhostBSD network conection manager

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	doas:security/doas \
		${LOCALBASE}/share/icons/hicolor/index.theme:misc/hicolor-icon-theme

USES=		python:3.4+ gnome shebangfix
SHEBANG_GLOB=	*.py

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

NO_ARCH=	yes
USE_PYTHON=	distutils noflavors
USE_GNOME=	pygobject3 gtk-update-icon-cache

SUB_FILES=	pkg-message


.include <bsd.port.mk>
