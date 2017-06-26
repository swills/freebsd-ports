# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/devel/py-pathlib2/Makefile 444305 2017-06-25 16:25:44Z ultima $

PORTNAME=	pathlib2
PORTVERSION=	2.3.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Object-oriented filesystem paths

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3500
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}scandir>=0:sysutils/py-scandir
.endif

do-test:
	@(cd ${WRKSRC} && \
		${PYTHON_CMD} test_pathlib2.py && \
		${PYTHON_CMD} test_pathlib2_with_py2_unicode_literals.py)

.include <bsd.port.post.mk>
