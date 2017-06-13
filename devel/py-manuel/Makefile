# $FreeBSD: head/devel/py-manuel/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	manuel
PORTVERSION=	1.8.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Lets you build tested documentation

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six

USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
