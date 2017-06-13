# Created by: Sahil Tandon <sahil@tandon.net>
# $FreeBSD: head/lang/runawk/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	runawk
PORTVERSION=	1.6.0
CATEGORIES=	lang
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wrapper for AWK interpreter that implements a modules system

LICENSE=	MIT

BUILD_DEPENDS=	mk-configure>=0.26.0:devel/mk-configure

MAKE_ENV=	DESTDIR="${STAGEDIR}" EGDIR="${EXAMPLESDIR}"
INSTALL_TARGET=	install install-doc install-examples

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	DOCS EXAMPLES

do-build:
	@${SETENV} ${MAKE_ENV} ${LOCALBASE}/bin/mkcmake -C ${WRKSRC}

do-install:
	@${SETENV} ${MAKE_ENV} ${LOCALBASE}/bin/mkcmake -C ${WRKSRC} \
		${INSTALL_TARGET}

.include <bsd.port.mk>
