# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/sysutils/libcpuid/Makefile 492356 2019-02-07 10:30:04Z danfe $

PORTNAME=	libcpuid
PORTVERSION=	0.4.1
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Small x86 CPU identification library

LICENSE=	BSD2CLAUSE

ONLY_FOR_ARCHS=	i386 amd64

USE_GITHUB=	yes
GH_ACCOUNT=	anrieff

USES=		autoreconf libtool pathfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

PORTDOCS=	AUTHORS ChangeLog Readme.md

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
