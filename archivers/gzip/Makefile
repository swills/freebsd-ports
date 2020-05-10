# Created by: Cyrille Lefevre <cyrille.lefevre@laposte.net>
# $FreeBSD$

PORTNAME=	gzip
PORTVERSION=	1.10
CATEGORIES=	archivers
MASTER_SITES=	GNU

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Compression utility designed to be a replacement for compress

LICENSE=	GPLv3+

USES=		cpe charsetfix makeinfo tar:xz
GNU_CONFIGURE=	yes

INFO=		gzip
CPE_VENDOR=	gnu

PORTDOCS=	AUTHORS COPYING ChangeLog ChangeLog-2007 INSTALL NEWS README \
		THANKS TODO

OPTIONS_DEFINE=	DOCS ZUTILS
OPTIONS_SUB=	yes

ZUTILS_CONFLICTS_INSTALL_OFF=	zutils-*
ZUTILS_DESC=	Use zutils for zcat, et. al.
ZUTILS_RUN_DEPENDS=	zutils>0:archivers/zutils

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
