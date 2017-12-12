# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: head/sysutils/py-psutil/Makefile 455963 2017-12-11 10:38:50Z sunpoet $

PORTNAME=	psutil
PORTVERSION=	5.4.2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Process utilities module for Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}unittest2>=0:devel/py-unittest2@${FLAVOR}

USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/psutil/_psutil_bsd.so ${STAGEDIR}${PYTHON_SITELIBDIR}/psutil/_psutil_posix.so

.include <bsd.port.mk>
