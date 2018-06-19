# $FreeBSD: head/databases/py-pglite/Makefile 471261 2018-06-01 14:22:06Z tcberner $

PORTNAME=	pglite
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.9
CATEGORIES=	databases python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Light PostgreSQL: use PostgreSQL as a simple SQLite database

LICENSE=	LGPL20+

USES=		python pgsql
USE_PYTHON=	autoplist distutils
USE_GITHUB=	yes
GH_ACCOUNT=	Oslandia
NO_ARCH=	yes
WANT_PGSQL=	server

post-extract:
	@${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|g' ${WRKSRC}/script/pglite

.include <bsd.port.mk>
