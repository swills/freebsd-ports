# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/databases/py-oursql/Makefile 415516 2016-05-19 18:06:20Z pi $

PORTNAME=	oursql
PORTVERSION=	0.9.3.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	MySQL bindings for python

LICENSE=	BSD2CLAUSE

USES=		mysql python
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/oursql.so

.include <bsd.port.mk>
