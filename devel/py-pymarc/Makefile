# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-pymarc/Makefile 466975 2018-04-10 17:39:12Z sunpoet $

PORTNAME=	pymarc
PORTVERSION=	3.1.8
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
