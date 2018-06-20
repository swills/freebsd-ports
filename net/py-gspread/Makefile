# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/net/py-gspread/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	gspread
PORTVERSION=	2.0.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Google Spreadsheets Python API

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>2.2.1:www/py-requests@${PY_FLAVOR}

USES=	python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
