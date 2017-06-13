# $FreeBSD: head/textproc/py-python-docx/Makefile 439013 2017-04-21 07:26:26Z miwi $

PORTNAME=	python-docx
PORTVERSION=	0.8.6
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jjachuf@gmail.com
COMMENT=	Python library for creating and updating Microsoft Word files

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=3.3.4:devel/py-lxml

# Python3 ready
USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
