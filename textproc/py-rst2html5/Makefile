# Created by: Olivier Duchateau
# $FreeBSD: head/textproc/py-rst2html5/Makefile 484962 2018-11-14 21:44:53Z sunpoet $

PORTNAME=	rst2html5
PORTVERSION=	1.9.5
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Produces HTML5 documents from reStructuredText sources

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PY_PATHLIB}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Genshi>=0.7:textproc/py-genshi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}docutils>=0.14:textproc/py-docutils@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>=2.0.2:textproc/py-pygments@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
