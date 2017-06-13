# Created by: Dmitry Sivachenko <dima@Chg.RU>
# $FreeBSD: head/print/trueprint/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	trueprint
PORTVERSION=	5.4
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	GNU

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Print program listings on postscript printer

USES=		gettext gmake
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

INFO=		trueprint

PLIST_FILES=	bin/trueprint man/man1/trueprint.1.gz

.include <bsd.port.mk>
