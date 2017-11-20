# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/net/py-shodan/Makefile 454492 2017-11-19 14:15:10Z ehaupt $

PORTNAME=	shodan
PORTVERSION=	1.7.5
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Python library and command-line utility for Shodan

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}XlsxWriter>0:textproc/py-xlsxwriter \
		${PYTHON_PKGNAMEPREFIX}click-plugins>=1.0.3:devel/py-click-plugins \
		${PYTHON_PKGNAMEPREFIX}click>=3.2:devel/py-click \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
