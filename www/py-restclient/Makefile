# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/www/py-restclient/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	restclient
PORTVERSION=	0.11.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Convenient library for writing REST clients

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PKGNAMEPREFIX}httplib2>=0:www/py-httplib2

USES=		python
USE_PYTHON=	distutils autoplist

post-patch:
	${REINPLACE_CMD} -e 's,install_requires.*,,' ${WRKSRC}/setup.py

.include <bsd.port.mk>
