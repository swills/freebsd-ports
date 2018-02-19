# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: head/devel/py-jsonrpclib/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	jsonrpclib
PORTVERSION=	0.1.7
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bra@fsn.hu
COMMENT=	Implements the JSON-RPC 2.0 proposed specification in pure Python

LICENSE=	APACHE20

USES=		python:2.7
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	CJSON
CJSON_DESC=	Use cjson instead of json or simplejson

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCJSON}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}cjson>0:devel/py-cjson@${FLAVOR}
.endif

.include <bsd.port.mk>
