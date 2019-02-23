# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/math/py-munkres10/Makefile 493108 2019-02-16 22:52:51Z sunpoet $

PORTNAME=	munkres
PORTVERSION=	1.0.12
DISTVERSIONPREFIX=	release-
CATEGORIES=	math python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	10

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Munkres implementation for Python

LICENSE=	APACHE20

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.0\.

GH_ACCOUNT=	bmc
USE_GITHUB=	yes

.include <bsd.port.mk>
