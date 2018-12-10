# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/py-requests-futures/Makefile 486538 2018-12-03 19:58:54Z sunpoet $

PORTNAME=	requests-futures
PORTVERSION=	0.9.9
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
