# $FreeBSD: head/textproc/py-python-slugify/Makefile 479285 2018-09-09 11:06:28Z matthew $

PORTNAME=	python-slugify
PORTVERSION=	1.2.6
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Slugify application that handles unicode

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}unidecode>=0.04.16:converters/py-unidecode@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
