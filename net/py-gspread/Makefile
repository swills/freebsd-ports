# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/net/py-gspread/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	gspread
PORTVERSION=	0.6.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Google Spreadsheets Python API

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>2.2.1:www/py-requests@${FLAVOR}

USES=	python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
