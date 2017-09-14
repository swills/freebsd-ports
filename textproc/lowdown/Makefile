# $FreeBSD: head/textproc/lowdown/Makefile 449776 2017-09-13 12:08:31Z bapt $

PORTNAME=	lowdown
PORTVERSION=	0.2.4
CATEGORIES=	textproc
MASTER_SITES=	http://kristaps.bsd.lv/lowdown/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Simple Markdown translator

LICENSE=	ISCL

HAS_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
