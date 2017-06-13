# Created by: J Han <hjh@best.com>
# $FreeBSD: head/misc/diction/Makefile 434927 2017-02-27 12:44:49Z amdmi3 $

PORTNAME=	diction
PORTVERSION=	1.11
PORTREVISION=	2
CATEGORIES=	misc
MASTER_SITES=	GNU

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU diction and style

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/*

.include <bsd.port.mk>
