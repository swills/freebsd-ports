# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: head/net/py-netlib/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	netlib
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gaod@hychen.org
COMMENT=	Collection of network utilities

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyasn1>0:devel/py-pyasn1 \
		${PYTHON_PKGNAMEPREFIX}openssl>0:security/py-openssl

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
