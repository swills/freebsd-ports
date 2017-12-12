# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: head/devel/py-decorator/Makefile 455881 2017-12-10 03:58:42Z ygy $

PORTNAME=	decorator
PORTVERSION=	4.1.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ygy@FreeBSD.org
COMMENT=	Better living through Python with decorators

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
