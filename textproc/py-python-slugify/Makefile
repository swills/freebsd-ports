# $FreeBSD: head/textproc/py-python-slugify/Makefile 494754 2019-03-05 23:38:27Z matthew $

PORTNAME=	python-slugify
PORTVERSION=	3.0.0
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
