# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/audio/py-pyacoustid/Makefile 481127 2018-10-02 19:06:16Z feld $

PORTNAME=	pyacoustid
PORTVERSION=	1.1.5
PORTREVISION=	0
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bindings for Chromaprint acoustic fingerprinting and the Acoustid API

LICENSE=	MIT

LIB_DEPENDS=	libchromaprint.so:audio/chromaprint

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
