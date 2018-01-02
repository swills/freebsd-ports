# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/sysutils/py-distro/Makefile 457667 2017-12-31 03:46:09Z woodsb02 $

PORTNAME=	distro
PORTVERSION=	1.2.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	Linux OS platform information API

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:2.7+ shebangfix
USE_PYTHON=	autoplist concurrent distutils
SHEBANG_FILES=	query_local_distro.py
NO_ARCH=	yes

.include <bsd.port.mk>
