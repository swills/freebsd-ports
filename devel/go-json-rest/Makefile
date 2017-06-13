# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/go-json-rest/Makefile 413776 2016-04-22 12:40:04Z mat $

PORTNAME=	go-json-rest
PORTVERSION=	1.0.0
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	GH \
		http://mirrors.rit.edu/zi/

MAINTAINER=	lattera@gmail.com
COMMENT=	Quick and easy way to setup a RESTful JSON API

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	ant0ine

GO_PKGNAME=	github.com/ant0ine/go-json-rest

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${GO_LIBDIR}/${GO_PKGNAME}
	@${INSTALL_DATA} ${GO_WRKDIR_PKG}/${GO_PKGNAME}/trie.a \
		${STAGEDIR}${PREFIX}/${GO_LIBDIR}/${GO_PKGNAME}

.include <bsd.port.mk>
