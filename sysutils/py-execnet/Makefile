# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/sysutils/py-execnet/Makefile 442846 2017-06-07 15:21:19Z woodsb02 $

PORTNAME=	execnet
PORTVERSION=	1.4.1
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Distributed Python deployment and communication

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>=0:devel/py-setuptools_scm
RUN_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}apipkg>=1.4:devel/py-apipkg

NO_ARCH=	yes
USES?=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
