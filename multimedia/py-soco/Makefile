# $FreeBSD: head/multimedia/py-soco/Makefile 470503 2018-05-21 02:35:47Z sunpoet $

PORTNAME=	soco
PORTVERSION=	0.15
DISTVERSIONPREFIX=	v
CATEGORIES=	multimedia python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	conall@conall.net
COMMENT=	Python library to control Sonos speakers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xmltodict>0:devel/py-xmltodict@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	SoCo
GH_PROJECT=	SoCo

.include <bsd.port.mk>
