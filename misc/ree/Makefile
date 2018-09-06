# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/misc/ree/Makefile 478550 2018-08-31 12:24:12Z ehaupt $

PORTNAME=	ree
PORTVERSION=	1.4
CATEGORIES=	misc

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Tool to dump your ROM extensions

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64 i386

USE_GITHUB=	yes

GH_ACCOUNT=	alexmyczko

PLIST_FILES=	sbin/rom-ree bin/fontdump
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

MAKEFILE=	makefile

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
