# Created by: bland@FreeBSD.org
# $FreeBSD: head/devel/py-xattr/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	xattr
PORTVERSION=	0.7.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bland@FreeBSD.org
COMMENT=	Python wrapper for extended filesystem attributes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>0:devel/py-cffi
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
