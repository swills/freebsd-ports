# Created by: antoine@FreeBSD.org
# $FreeBSD: head/archivers/py-python-snappy/Makefile 477429 2018-08-17 13:46:31Z antoine $

PORTNAME=	python-snappy
PORTVERSION=	0.5.3
CATEGORIES=	archivers devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python library for the snappy compression library from Google

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libsnappy.so:archivers/snappy

USES=		python
USE_PYTHON=	distutils autoplist
CPPFLAGS+=	-I${LOCALBASE}/include
TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
TEST_WRKSRC=	${WRKSRC}/scratch	# Any directory different from ${WRKSRC}

do-test:
	@${MKDIR} ${TEST_WRKSRC}
	@${CP} ${WRKSRC}/test_*.py ${TEST_WRKSRC}
	@(cd ${TEST_WRKSRC} && for t in test_*.py; do ${SETENV} ${TEST_ENV} ${PYTHON_CMD} $$t; done)

.include <bsd.port.mk>
