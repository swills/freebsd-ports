# Created by: Kay Lehmann <kay_lehmann@web.de>
# $FreeBSD: head/databases/qt4-mysql-plugin/Makefile 442740 2017-06-06 05:00:56Z tcberner $

PORTREVISION=	3

COMMENT=	Qt MySQL database plugin
DB=		mysql
USE_MYSQL=	yes

CXXFLAGS+=	-I${LOCALBASE}/include/mysql
LDFLAGS+=	-L${LOCALBASE}/lib/mysql

.include "${.CURDIR:H:H}/devel/qt4/Makefile.sqldrivers"
