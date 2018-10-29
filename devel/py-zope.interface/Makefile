# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: head/devel/py-zope.interface/Makefile 483296 2018-10-28 14:13:01Z rm $

PORTNAME=	zope.interface
PORTVERSION=	4.6.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Interfaces for Python

LICENSE=	ZPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/zope/interface/_zope_interface_coptimizations.so

.include <bsd.port.mk>
