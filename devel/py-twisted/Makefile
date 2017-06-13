# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: head/devel/py-twisted/Makefile 443462 2017-06-12 19:38:17Z sunpoet $

PORTNAME=	twisted
PORTVERSION=	17.5.0
CATEGORIES=	devel net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Twisted-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Asynchronous networking framework written in Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}constantly>=15.1:devel/py-constantly \
		${PYTHON_PKGNAMEPREFIX}incremental>=16.10.1:devel/py-incremental
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.6.0:devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}constantly>=15.1:devel/py-constantly \
		${PYTHON_PKGNAMEPREFIX}incremental>=16.10.1:devel/py-incremental \
		${PYTHON_PKGNAMEPREFIX}Automat>=0.3.0:devel/py-Automat

USES=		python tar:bzip2
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR}/ -name '*.so' -exec ${STRIP_CMD} {} +

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m twisted.trial -e twisted

.include <bsd.port.mk>
