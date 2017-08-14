# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: head/devel/py-jsonrpclib/Makefile 447861 2017-08-12 20:31:29Z swills $

PORTNAME=	jsonrpclib
PORTVERSION=	0.1.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bra@fsn.hu
COMMENT=	Implements the JSON-RPC 2.0 proposed specification in pure Python

LICENSE=	APACHE20

USES=		python:2
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	CJSON
CJSON_DESC=	Use cjson instead of json or simplejson

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCJSON}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}cjson>0:devel/py-cjson
.endif

.include <bsd.port.mk>
