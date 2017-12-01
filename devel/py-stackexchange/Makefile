# Created by: Carlos J. Puga Medina <cpm@FreeBSD.org>
# $FreeBSD: head/devel/py-stackexchange/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	stackexchange
PORTVERSION=	2.2.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py-${PORTNAME}-${PORTVERSION}

MAINTAINER=	cpm@FreeBSD.org
COMMENT=	Python binding to the StackExchange website APIs

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.8.0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
