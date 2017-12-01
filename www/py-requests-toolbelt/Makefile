# $FreeBSD: head/www/py-requests-toolbelt/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	requests-toolbelt
PORTVERSION=	0.7.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Utility belt for advanced users of python-requests

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>2.0.1:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
