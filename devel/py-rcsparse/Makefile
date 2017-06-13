# Created by: mp39590@gmail.com
# $FreeBSD: head/devel/py-rcsparse/Makefile 409804 2016-02-29 10:40:03Z rakuco $

PORTNAME=	rcsparse
PORTVERSION=	0.0.0.20151027
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mp39590@gmail.com
COMMENT=	RCS file parsing library

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USE_GITHUB=	yes
GH_ACCOUNT=	corecode
GH_TAGNAME=	206bca

USES=		python:2.7
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}/${PYTHONPREFIX_SITELIBDIR}/${PORTNAME}.so

.include <bsd.port.mk>
