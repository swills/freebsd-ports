# $FreeBSD: head/devel/py-lazr.config/Makefile 448956 2017-08-30 03:02:56Z acm $

PORTNAME=	lazr.config
PORTVERSION=	2.2
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Create configuration schemas, and process and validate configurations

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}lazr.delegates>=2.0.3:devel/py-lazr.delegates

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
