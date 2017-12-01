# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/www/py-fedex/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	fedex
PORTVERSION=	2.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Light wrapper around Fedex's Web Services SOAP API using suds

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}suds>=0:net/py-suds@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
