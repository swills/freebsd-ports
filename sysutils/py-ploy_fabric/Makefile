# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/sysutils/py-ploy_fabric/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	ploy_fabric
DISTVERSION=	1.1.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Ploy plugin for integration with Fabric

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ploy>=1.0.0:sysutils/py-ploy@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fabric>=1.4.0,1:devel/py-fabric@${FLAVOR}

USES=		python:-2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
