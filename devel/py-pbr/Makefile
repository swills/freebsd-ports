# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-pbr/Makefile 443062 2017-06-10 02:43:14Z woodsb02 $

PORTNAME=	pbr
PORTVERSION=	1.8.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python Build Reasonableness

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip

NO_ARCH=	yes

USES?=		python shebangfix
USE_PYTHON=	autoplist concurrent distutils
SHEBANG_FILES=	pbr/tests/testpackage/setup.py

.include <bsd.port.mk>
