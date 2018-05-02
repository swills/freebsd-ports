# $FreeBSD: head/textproc/lowdown/Makefile 468078 2018-04-23 07:50:26Z bapt $

PORTNAME=	lowdown
PORTVERSION=	0.3.2
CATEGORIES=	textproc
MASTER_SITES=	http://kristaps.bsd.lv/lowdown/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Simple Markdown translator

LICENSE=	ISCL

HAS_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
