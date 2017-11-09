# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: head/devel/py-parsedatetime/Makefile 453642 2017-11-06 19:46:59Z antoine $

PORTNAME=	parsedatetime
PORTVERSION=	2.4
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Python module for parsing 'human readable' date/time expressions

LICENSE=	APACHE20

USES=		python
USE_PYTHON=	distutils autoplist

post-patch:
	${REINPLACE_CMD} "/install_requires=\['future'\],/d" ${WRKSRC}/setup.py

.include <bsd.port.mk>
