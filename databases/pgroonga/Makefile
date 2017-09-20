# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/databases/pgroonga/Makefile 450158 2017-09-19 19:48:30Z bofh $

PORTNAME=	pgroonga
PORTVERSION=	2.0.1
CATEGORIES=	databases textproc
MASTER_SITES=	http://packages.groonga.org/source/pgroonga/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Open-source fulltext search engine for PostGRESQL

LICENSE=	PostgreSQL

LIB_DEPENDS=	libgroonga.so:textproc/groonga

USES=		gmake pgsql pkgconfig
SUB_FILES=	pkg-message

OPTIONS_DEFINE=	MECAB
MECAB_DESCRIBE=	Use MeCab as a tokenizer
MECAB_BUILD_DEPENDS=	mecab-ipadics>=0.996:japanese/mecab-ipadic

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga_check.so

.include <bsd.port.mk>
