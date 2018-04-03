# Created by: Eric Turgeon <ericturgeon.bsd@gmail.org>
# $FreeBSD: head/net-mgmt/networkmgr/Makefile 466342 2018-04-03 12:45:01Z ericbsd $

PORTNAME=	networkmgr
DISTVERSION=	2.5
CATEGORIES=	net-mgmt

MAINTAINER=	ericbsd@FreeBSD.org
COMMENT=	FreeBSD/GhostBSD network conection manager

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	doas:security/doas

USES=		python:2.7 shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

NO_ARCH=	yes
USE_PYTHON=	distutils
USE_GNOME=	pygtk2

SUB_FILES=	pkg-message

SHEBANG_FILES=	${WRKSRC}/src/*.py \
		${WRKSRC}/src/netcardmgr

.include <bsd.port.mk>
