# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: head/sysutils/py-psutil/Makefile 438278 2017-04-11 15:56:03Z sunpoet $

PORTNAME=	psutil
PORTVERSION=	5.2.2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Process utilities module for Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock \
		${PYTHON_PKGNAMEPREFIX}unittest2>=0:devel/py-unittest2

USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/psutil/_psutil_bsd.so ${STAGEDIR}${PYTHON_SITELIBDIR}/psutil/_psutil_posix.so

.include <bsd.port.mk>
