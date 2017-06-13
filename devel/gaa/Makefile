# Created by: Dima Sivachenko <dima@chg.ru>
# $FreeBSD: head/devel/gaa/Makefile 415319 2016-05-16 12:28:16Z antoine $

PORTNAME=	gaa
PORTVERSION=	1.6.6
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	GPL Argument Analyser

GNU_CONFIGURE=	yes
USES=		bison

post-patch:
	${REINPLACE_CMD} -e "s/getline/get_line/g" ${WRKSRC}/source/gaa_parser.y

.include <bsd.port.mk>
