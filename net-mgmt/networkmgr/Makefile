# Created by: Eric Turgeon <ericturgeon.bsd@gmail.org>
# $FreeBSD: head/net-mgmt/networkmgr/Makefile 442783 2017-06-06 16:18:16Z mat $

PORTNAME=	networkmgr
PORTVERSION=	2.2
CATEGORIES=	net-mgmt

MAINTAINER=	ericturgeon.bsd@gmail.com
COMMENT=	FreeBSD/GhostBSD network conection manager

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	doas:security/doas

USE_GITHUB=	yes
GH_ACCOUNT=	GhostBSD

USES=		python:2.7
USE_PYTHON=	distutils
USE_GNOME=	pygtk2

SUB_FILES=	pkg-message

.include <bsd.port.mk>
