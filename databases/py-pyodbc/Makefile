# Created by: Robert Kruus <rob.kruus@gmail.com>
# $FreeBSD: head/databases/py-pyodbc/Makefile 446179 2017-07-18 23:40:21Z dbaio $

PORTNAME=	pyodbc
PORTVERSION=	4.0.17
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rob.kruus@gmail.com
COMMENT=	ODBC connections for python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libodbc.so:databases/unixODBC
BUILD_DEPENDS=	unixODBC>=2.2.14:databases/unixODBC

USES=		localbase python
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pyodbc.so

.include <bsd.port.mk>
