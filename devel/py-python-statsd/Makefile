# $FreeBSD: head/devel/py-python-statsd/Makefile 450613 2017-09-25 15:12:57Z sunpoet $

PORTNAME=	python-statsd
PORTVERSION=	2.1.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fax@nohik.ee
COMMENT=	Statsd is a client for Etsy's node-js statsd server

LICENSE=	BSD3CLAUSE

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

post-extract:
	${RM} -r ${WRKSRC}/tests

.include <bsd.port.mk>
