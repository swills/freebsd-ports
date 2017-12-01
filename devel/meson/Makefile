# Created by: Ting-Wei Lan <lantw44@gmail.com>
# $FreeBSD: head/devel/meson/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	meson
PORTVERSION=	0.42.1
CATEGORIES=	devel python
MASTER_SITES=	https://github.com/mesonbuild/${PORTNAME}/releases/download/${PORTVERSION}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	High performance build system

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	ninja:devel/ninja

USES=		python:3.4+
USE_PYTHON=	autoplist distutils noflavors

.include <bsd.port.mk>
