# Created by: Palle Girgensohn <girgen@pingpong.net>
# $FreeBSD: head/databases/postgresql95-contrib/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	postgresql
PORTREVISION=	0
CATEGORIES=	databases

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	The contrib utilities from the PostgreSQL distribution

LIB_DEPENDS=	libxslt.so:textproc/libxslt \
		libxml2.so:textproc/libxml2

MASTERDIR=	${.CURDIR}/../postgresql95-server

USES=		bison pgsql:9.5

BUILD_DIRS=	src/port src/common contrib
INSTALL_DIRS=	contrib

SLAVE_ONLY=	yes
COMPONENT=	-contrib
CONFIGURE_ARGS+=--with-libxslt --with-libxml --with-openssl --disable-nls --with-uuid=bsd
LDFLAGS+=	-lpthread -L${PREFIX}/lib

post-install:
	@- ${INSTALL_DATA} ${WRKSRC}/contrib/README ${STAGEDIR}${DOCSDIR}/extension/README

.include "${MASTERDIR}/Makefile"
