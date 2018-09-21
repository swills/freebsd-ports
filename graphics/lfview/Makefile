# Created by: Yuu Yashiki
# $FreeBSD: head/graphics/lfview/Makefile 480072 2018-09-18 19:58:32Z emaste $

PORTNAME=	lfview
PORTVERSION=	1.1a
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	http://hoshina.denpa.org/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphic viewer for Leaf products

USES=		imake tar:tgz
USE_XORG=	x11 xext
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS
DOCSDIR=	${PREFIX}/share/doc/ja/lfview

.include <bsd.port.options.mk>

CFLAGS+=	-fPIC
MAKE_ENV+=	SHLIBGLOBALSFLAGS=-fPIC

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lfview ${STAGEDIR}${PREFIX}/bin
	${INSTALL_LIB} ${WRKSRC}/plugins/liblfv_leaf.so.1 ${STAGEDIR}${PREFIX}/lib
	${LN} -sf liblfv_leaf.so.1 ${STAGEDIR}${PREFIX}/lib/liblfv_leaf.so

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
