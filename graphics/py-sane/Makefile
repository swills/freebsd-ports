# Created by: buganini@gmail.com
# $FreeBSD: head/graphics/py-sane/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	sane
PORTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	http://effbot.org/media/downloads/ \
		http://www.pythonware.net/storage/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Imaging-1.1.7

MAINTAINER=	buganini@gmail.com
COMMENT=	Python bindings for Sane

LIB_DEPENDS=	libsane.so:graphics/sane-backends
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${PY_FLAVOR}

DIST_SUBDIR=	python
USES=		python:2.7
USE_PYTHON=	distutils

WRKSRC=		${WRKDIR}/${DISTNAME}/Sane

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
