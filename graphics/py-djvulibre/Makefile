# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/graphics/py-djvulibre/Makefile 479984 2018-09-18 07:42:25Z yuri $

PORTNAME=	python-djvulibre
DISTVERSION=	0.8.2
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
