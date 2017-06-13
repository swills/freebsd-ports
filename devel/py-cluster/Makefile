# $FreeBSD: head/devel/py-cluster/Makefile 442039 2017-05-30 00:49:10Z dbaio $

PORTNAME=	cluster
PORTVERSION=	1.4.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Create several groups (clusters) of objects from a list in Python

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

PORTSCOUT=	skipv:regression

USE_GITHUB=	yes
GH_ACCOUNT=	exhuma
GH_PROJECT=	python-cluster

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
