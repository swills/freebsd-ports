# Created by: Robert Kruus <rob.kruus@gmail.com>
# $FreeBSD: head/databases/py-odbc/Makefile 431764 2017-01-17 17:29:32Z amdmi3 $

PORTNAME=	pyodbc
PORTVERSION=	4.0.1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP/source/p/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rob.kruus@gmail.com
COMMENT=	ODBC connections for python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libodbc.so:databases/unixODBC
BUILD_DEPENDS=	unixODBC>=2.2.14:databases/unixODBC

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
