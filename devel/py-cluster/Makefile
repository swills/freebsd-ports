# $FreeBSD: head/devel/py-cluster/Makefile 469885 2018-05-14 13:13:49Z dbaio $

PORTNAME=	cluster
PORTVERSION=	1.4.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Create several groups (clusters) of objects from a list in Python

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python

USE_GITHUB=	yes
GH_ACCOUNT=	exhuma
GH_PROJECT=	python-cluster

USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

PORTSCOUT=	skipv:regression

.include <bsd.port.mk>
