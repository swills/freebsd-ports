# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/sqliteman/Makefile 486467 2018-12-02 15:41:47Z rene $

PORTNAME=	sqliteman
PORTVERSION=	1.2.2
PORTREVISION=	10
CATEGORIES=	databases
MASTER_SITES=	SF

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Admin's GUI tool for Sqlite3

DEPRECATED=		Qt4 has been EOL since december 2015
EXPIRATION_DATE=	2019-03-15

BROKEN_powerpc64=	fails to build: Found unsuitable Qt version "" from NOTFOUND, this code requires Qt 4.x

LIB_DEPENDS=	libqscintilla2_qt4.so:devel/qscintilla2

USES=		cmake compiler:c++11-lib qt:4 sqlite
USE_QT=		qmake_build gui moc_build rcc_build uic_build xml sql

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
