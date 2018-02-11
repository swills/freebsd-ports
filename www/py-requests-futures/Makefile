# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/py-requests-futures/Makefile 461429 2018-02-10 19:59:31Z sunpoet $

PORTNAME=	requests-futures
PORTVERSION=	0.9.7
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	HTTP library written in Python for human beings

LICENSE=	APACHE20

USES=		python
USE_PYTHON=	autoplist distutils

RUN_DEPENDS=	${PY_FUTURES} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR}

NO_ARCH=	yes

.include <bsd.port.mk>
