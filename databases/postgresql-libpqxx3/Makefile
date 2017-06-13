# Created by: Palle Girgensohn <girgen@pingpong.net>
# $FreeBSD: head/databases/postgresql-libpqxx3/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	libpqxx
PORTVERSION=	3.1.1
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://pqxx.org/download/software/${PORTNAME}/
PKGNAMEPREFIX=	postgresql-
PKGNAMESUFFIX=	3
DIST_SUBDIR=	postgresql

MAINTAINER=	20080111.freebsd.org@ab.ote.we.lv
COMMENT=	New C++ interface for PostgreSQL

CONFLICTS=	postgresql-libpqxx-[2-4].*
PORTSCOUT=	limit:^2\.

USES+=		gmake libtool pathfix pgsql pkgconfig python:build shebangfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
PLIST_SUB=	PORTVERSION=${PORTVERSION}
INSTALL_TARGET=	install-strip

SHEBANG_FILES=	tools/splitconfig

CONFIGURE_ARGS=	--enable-shared

.include <bsd.port.mk>
