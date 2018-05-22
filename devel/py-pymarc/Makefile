# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-pymarc/Makefile 470473 2018-05-20 18:56:09Z sunpoet $

PORTNAME=	pymarc
PORTVERSION=	3.1.10
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Read Write And Modify MARC Bibliographic Data

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.9.0:devel/py-six@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} test.py

.include <bsd.port.mk>
