# $FreeBSD: head/databases/openark-kit/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	openark-kit
PORTVERSION=	196
CATEGORIES=	databases
MASTER_SITES=	https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/openarkkit/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Common utilities for MySQL

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.2:databases/py-MySQLdb@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
