# $FreeBSD: head/textproc/lowdown/Makefile 451123 2017-10-03 11:32:24Z bapt $

PORTNAME=	lowdown
PORTVERSION=	0.2.7
CATEGORIES=	textproc
MASTER_SITES=	http://kristaps.bsd.lv/lowdown/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Simple Markdown translator

LICENSE=	ISCL

HAS_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
