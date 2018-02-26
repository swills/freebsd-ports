# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/databases/py-oursql/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	oursql
PORTVERSION=	0.9.3.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	MySQL bindings for python

LICENSE=	BSD2CLAUSE

USES=		mysql python:2.7
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/oursql.so

.include <bsd.port.mk>
