# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/databases/py-peewee/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	peewee
PORTVERSION=	2.9.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Small, expressive Python ORM

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_DEFINE=		DOCS SQLITE MYSQL PGSQL
OPTIONS_DEFAULT=	SQLITE

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

SQLITE_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${FLAVOR}
MYSQL_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.3:databases/py-MySQLdb@${FLAVOR}
PGSQL_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psycopg2>=2.5.1:databases/py-psycopg2@${FLAVOR}

.include <bsd.port.mk>
