# Created by: Ting-Wei Lan <lantw44@gmail.com>
# $FreeBSD: head/devel/meson/Makefile 492640 2019-02-10 20:44:36Z kwm $

PORTNAME=	meson
PORTVERSION=	0.49.2
CATEGORIES=	devel python
MASTER_SITES=	https://github.com/mesonbuild/${PORTNAME}/releases/download/${PORTVERSION}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	High performance build system

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	ninja:devel/ninja

USES=		python:3.5+
USE_PYTHON=	autoplist distutils noflavors
NO_ARCH=	yes

.include <bsd.port.mk>
