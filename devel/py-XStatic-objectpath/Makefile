# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/devel/py-XStatic-objectpath/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	XStatic-objectpath
PORTVERSION=	1.2.1.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Parser for js object paths (objectpath)

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}XStatic>=0:devel/py-XStatic@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
