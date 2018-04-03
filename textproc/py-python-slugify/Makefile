# $FreeBSD: head/textproc/py-python-slugify/Makefile 465968 2018-03-30 13:16:26Z matthew $

PORTNAME=	python-slugify
PORTVERSION=	1.2.5
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Slugify application that handles unicode

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}unidecode>=0.04.16:converters/py-unidecode@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
