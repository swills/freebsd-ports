# $FreeBSD: head/textproc/lowdown/Makefile 480351 2018-09-22 06:53:04Z bapt $

PORTNAME=	lowdown
PORTVERSION=	0.4.1
CATEGORIES=	textproc
MASTER_SITES=	http://kristaps.bsd.lv/lowdown/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Simple Markdown translator

LICENSE=	ISCL

BUILD_DEPENDS=	${LOCALBASE}/lib/libdiff.a:textproc/libdiff

HAS_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-diff

.include <bsd.port.mk>
