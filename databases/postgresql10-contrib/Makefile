# Created by: Palle Girgensohn <girgen@pingpong.net>
# $FreeBSD: head/databases/postgresql10-contrib/Makefile 447733 2017-08-11 05:26:18Z antoine $

PORTNAME=	postgresql
PORTREVISION=	0
CATEGORIES=	databases

MAINTAINER=	pgsql@FreeBSD.org
COMMENT=	The contrib utilities from the PostgreSQL distribution

LIB_DEPENDS=	libxslt.so:textproc/libxslt \
		libxml2.so:textproc/libxml2

MASTERDIR=	${.CURDIR}/../postgresql10-server

USES=		bison pgsql:10

BUILD_DIRS=	src/port src/include src/common contrib
INSTALL_DIRS=	contrib

SLAVE_ONLY=	yes
COMPONENT=	-contrib
CONFIGURE_ARGS+=--with-libxslt --with-libxml --with-openssl --disable-nls --with-uuid=bsd
LDFLAGS+=	-lpthread -L${PREFIX}/lib

post-configure: 
		@cd ${WRKSRC}/src/backend && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} symlinks

post-install:
	@- ${INSTALL_DATA} ${WRKSRC}/contrib/README ${STAGEDIR}${DOCSDIR}/extension/README

.include "${MASTERDIR}/Makefile"
