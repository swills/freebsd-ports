# Created by: Ting-Wei Lan <lantw44@gmail.com>
# $FreeBSD: head/devel/meson/Makefile 465428 2018-03-24 06:39:41Z truckman $

PORTNAME=	meson
PORTVERSION=	0.45.1
CATEGORIES=	devel python
MASTER_SITES=	https://github.com/mesonbuild/${PORTNAME}/releases/download/${PORTVERSION}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	High performance build system

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	ninja:devel/ninja

USES=		python:3.4+
USE_PYTHON=	autoplist distutils noflavors
NO_ARCH=	yes

.include <bsd.port.mk>
