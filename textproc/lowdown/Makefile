# $FreeBSD: head/textproc/lowdown/Makefile 453232 2017-10-31 12:27:05Z bapt $

PORTNAME=	lowdown
PORTVERSION=	0.3.1
CATEGORIES=	textproc
MASTER_SITES=	http://kristaps.bsd.lv/lowdown/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Simple Markdown translator

LICENSE=	ISCL

HAS_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
