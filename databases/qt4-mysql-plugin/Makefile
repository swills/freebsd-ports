# Created by: Kay Lehmann <kay_lehmann@web.de>
# $FreeBSD: head/databases/qt4-mysql-plugin/Makefile 469165 2018-05-05 20:05:08Z tcberner $

PORTREVISION=	4

COMMENT=	Qt MySQL database plugin
DB=		mysql
USE_MYSQL=	yes

CXXFLAGS+=	-I${LOCALBASE}/include/mysql
LDFLAGS+=	-L${LOCALBASE}/lib/mysql

.include "${.CURDIR:H:H}/devel/qt4/Makefile.sqldrivers"
