# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/sqliteman/Makefile 464266 2018-03-12 18:06:51Z tcberner $

PORTNAME=	sqliteman
PORTVERSION=	1.2.2
PORTREVISION=	9
CATEGORIES=	databases
MASTER_SITES=	SF

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Admin's GUI tool for Sqlite3

LIB_DEPENDS=	libqscintilla2_qt4.so:devel/qscintilla2

USES=		cmake sqlite
USE_QT4=	qmake_build gui moc_build rcc_build uic_build xml sql

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
