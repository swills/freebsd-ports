# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/net-p2p/py-vertex/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	vertex
PORTVERSION=	0.3.1
PORTREVISION=	2
CATEGORIES=	net-p2p python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Vertex-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Vertex is an implementation of the Q2Q protocol

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}epsilon>=0:devel/py-epsilon@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>=0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}twisted>=0:devel/py-twisted@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
