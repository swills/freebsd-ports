# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/www/py-evernote/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	evernote
PORTVERSION=	1.25.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Evernote SDK for Python

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}oauth2>0:net/py-oauth2 \
		${PYTHON_PKGNAMEPREFIX}thrift>0:devel/py-thrift

USES=		python:-2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
