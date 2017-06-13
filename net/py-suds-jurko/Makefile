# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/net/py-suds-jurko/Makefile 430952 2017-01-09 14:28:12Z novel $

PORTNAME=	suds-jurko
PORTVERSION=	0.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Lightweight SOAP client (jurko's fork)

LICENSE=	LGPL3

NO_ARCH=	yes

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}suds-[0-9]*

USES=		python tar:bz2
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
