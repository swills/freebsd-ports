# Created by: jseger@scds.com
# $FreeBSD: head/games/gnugo/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	gnugo
PORTVERSION=	3.8
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	GNU

MAINTAINER=	spcoltri@omcl.org
COMMENT=	The game of Go

GNU_CONFIGURE=	yes
USES=		gmake

INFO=		gnugo
PLIST_FILES=	bin/gnugo \
		man/man6/gnugo.6.gz

post-extract:
	${RM} ${WRKSRC}/doc/gnugo.info*

.include <bsd.port.mk>
