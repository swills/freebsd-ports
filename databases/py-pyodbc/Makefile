# Created by: Robert Kruus <rob.kruus@gmail.com>
# $FreeBSD: head/databases/py-pyodbc/Makefile 483111 2018-10-27 06:00:24Z wen $

PORTNAME=	pyodbc
PORTVERSION=	4.0.24
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
