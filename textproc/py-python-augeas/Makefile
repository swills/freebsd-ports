# $FreeBSD: head/textproc/py-python-augeas/Makefile 471533 2018-06-04 08:34:26Z amdmi3 $

PORTNAME=	python-augeas
PORTVERSION=	1.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johan@stromnet.se
COMMENT=	Pure python bindings for Augeas

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.1.0:devel/py-cffi@${FLAVOR}
LIB_DEPENDS=	libaugeas.so:textproc/augeas

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils py3kplist

GH_ACCOUNT=	hercules-team

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${WRKSRC}/test/test_augeas.py

.include <bsd.port.mk>
