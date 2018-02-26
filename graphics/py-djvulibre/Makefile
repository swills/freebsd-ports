# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/graphics/py-djvulibre/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	python-djvulibre
PORTVERSION=	0.8
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python support for the DjVu image format

LICENSE=	GPLv2

LIB_DEPENDS=	libdjvulibre.so:graphics/djvulibre

USES=		python:2.7 pkgconfig
USE_PYTHON=	autoplist distutils cython

post-patch:
	@${REINPLACE_CMD} -e "s|'python'|'${PYTHON_CMD}'|g" ${WRKSRC}/setup.py

.include <bsd.port.mk>
