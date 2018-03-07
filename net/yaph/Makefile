# Created by: Patrick MARIE <mycroft@virgaria.org>
# $FreeBSD: head/net/yaph/Makefile 463107 2018-02-27 04:55:52Z yuri $

PORTNAME=	yaph
PORTVERSION=	0.91
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Yaph is a proxy scanner

GNU_CONFIGURE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/yaph/yaph ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/yaph/yaph.conf ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
