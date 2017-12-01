# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/devel/py-click-plugins/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	click-plugins
PORTVERSION=	1.0.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Click extension to register CLI commands via setuptools

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=3.2:devel/py-click@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
