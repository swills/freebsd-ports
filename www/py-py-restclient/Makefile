# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/www/py-py-restclient/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	py-restclient
PORTVERSION=	1.3.3
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python REST Client

RUN_DEPENDS=	${PKGNAMEPREFIX}httplib2>=0:www/py-httplib2@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

post-extract:
	${RM} -r ${WRKSRC}/tests

.include <bsd.port.mk>
