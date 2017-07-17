# Created by: arved
# $FreeBSD: head/textproc/py-chardet/Makefile 445822 2017-07-14 20:15:14Z rm $

PORTNAME=	chardet
PORTVERSION=	3.0.4
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
MASTER_SITES=	CHEESESHOP

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Universal encoding detector for Python 2 and 3

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest \
		${PYTHON_PKGNAMEPREFIX}hypothesis>0:devel/py-hypothesis

NO_ARCH=	yes
USES?=		python
USE_PYTHON=	autoplist concurrent distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} ptr

.include <bsd.port.mk>
