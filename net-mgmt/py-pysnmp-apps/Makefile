# Created by: Martin Jackson <mhjacks@swbell.net>
# $FreeBSD: head/net-mgmt/py-pysnmp-apps/Makefile 494106 2019-02-28 00:36:49Z leres $

PORTNAME=	pysnmp-apps
PORTVERSION=	0.5.3
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP \
		SF/pysnmp/pysnmp-apps/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mhjacks@swbell.net
COMMENT=	Command line utilities for pysnmp

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pysnmp>=4.3.2:net-mgmt/py-pysnmp@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
