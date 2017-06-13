# Created by: Ting-Wei Lan <lantw44@gmail.com>
# $FreeBSD: head/devel/meson/Makefile 440842 2017-05-13 13:51:01Z kwm $

PORTNAME=	meson
PORTVERSION=	0.40.1
CATEGORIES=	devel python
MASTER_SITES=	https://github.com/mesonbuild/${PORTNAME}/releases/download/${PORTVERSION}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	High performance build system

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	ninja:devel/ninja

USES=		python:3
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
