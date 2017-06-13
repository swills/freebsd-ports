# Created by: Johannes Jost Meixner <johannes@perceivon.net>
# $FreeBSD: head/graphics/py-pyganim/Makefile 416918 2016-06-15 09:04:29Z tz $

PORTNAME=	pyganim
PORTVERSION=	0.9.2
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Pyganim-${PORTVERSION}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Sprite animation module for Pygame

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}game>0:devel/py-game
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python zip
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
