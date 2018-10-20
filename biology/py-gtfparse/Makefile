# $FreeBSD: head/biology/py-gtfparse/Makefile 482398 2018-10-19 02:03:40Z yuri $

PORTNAME=	gtfparse
DISTVERSION=	1.2.0
CATEGORIES=	biology python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Parsing tools for GTF (gene transfer format) files

LICENSE=	APACHE20

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pandas>=0.15:math/py-pandas@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
