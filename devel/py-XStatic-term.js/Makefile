# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/devel/py-XStatic-term.js/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	XStatic-term.js
PORTVERSION=	0.0.7.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Terminal written in javascript (term.js)

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}XStatic>=0:devel/py-XStatic@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
