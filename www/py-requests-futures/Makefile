# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/py-requests-futures/Makefile 482979 2018-10-25 19:33:10Z sunpoet $

PORTNAME=	requests-futures
PORTVERSION=	0.9.8
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP library written in Python for human beings

LICENSE=	APACHE20

RUN_DEPENDS=	${PY_FUTURES} \
		${PYTHON_PKGNAMEPREFIX}requests>=1.2.0:www/py-requests@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
