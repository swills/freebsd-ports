# Created by: Radim Kolar <hsn@sendmail.cz>
# $FreeBSD: head/databases/py-cql/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	cql
PORTVERSION=	1.4.0
CATEGORIES=	databases python
MASTER_SITES=	http://cassandra-dbapi2.apache-extras.org.codespot.com/files/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
#DISTNAME=	cql-${PORTVERSION}

MAINTAINER=	hsn@sendmail.cz
COMMENT=	Python DB-API 2.0 client interface for Cassandra

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/thrift/Thrift.py:devel/py-thrift

USES=		python
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	cql

.include <bsd.port.mk>
