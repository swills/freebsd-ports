# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/graphics/py-djvulibre/Makefile 474329 2018-07-10 05:07:45Z yuri $

PORTNAME=	python-djvulibre
DISTVERSION=	0.8.1
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python support for the DjVu image format

LICENSE=	GPLv2

LIB_DEPENDS=	libdjvulibre.so:graphics/djvulibre

USES=		python pkgconfig
USE_PYTHON=	autoplist distutils cython

post-patch:
	@${REINPLACE_CMD} -e "s|'python'|'${PYTHON_CMD}'|g" ${WRKSRC}/setup.py

.include <bsd.port.mk>
