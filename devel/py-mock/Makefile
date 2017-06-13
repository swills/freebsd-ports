# Created by: jessekempf@gmail.com
# $FreeBSD: head/devel/py-mock/Makefile 443064 2017-06-10 02:52:09Z woodsb02 $

PORTNAME=	mock
PORTVERSION=	2.0.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jessekempf@gmail.com
COMMENT=	Mock unit tests for Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}pbr>=1.3:devel/py-pbr \
		${PYTHON_PKGNAMEPREFIX}six>=1.9:devel/py-six
RUN_DEPENDS:=	${BUILD_DEPENDS}
TESTS_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}tox>0:devel/py-tox

NO_ARCH=	yes
USES?=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3300
RUN_DEPENDS+=  ${PYTHON_PKGNAMEPREFIX}funcsigs>=0:devel/py-funcsigs
.endif

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.post.mk>
