# $FreeBSD: head/multimedia/py-soco/Makefile 459633 2018-01-22 01:11:55Z bmah $

PORTNAME=	soco
PORTVERSION=	0.13
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	multimedia python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	conall@conall.net
COMMENT=	Python library to control Sonos speakers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}xmltodict>0:devel/py-xmltodict@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	SoCo
GH_PROJECT=	SoCo

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
