# Created by: Carlos J. Puga Medina <cpm@FreeBSD.org>
# $FreeBSD: head/textproc/py-numpydoc/Makefile 466146 2018-04-01 12:36:59Z cpm $

PORTNAME=	numpydoc
PORTVERSION=	0.8.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cpm@FreeBSD.org
COMMENT=	Sphinx extension to support docstrings in Numpy format

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Jinja2>=2.3:devel/py-Jinja2@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sphinx>=1.2.3:textproc/py-sphinx@${FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m nose -v

.include <bsd.port.mk>
