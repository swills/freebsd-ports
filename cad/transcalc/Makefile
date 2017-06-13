# Created by: ijliao
# $FreeBSD: head/cad/transcalc/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	transcalc
PORTVERSION=	0.14
PORTREVISION=	12
CATEGORIES=	cad
MASTER_SITES=	http://transcalc.sourceforge.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Analysis and synthesis tool for RF and microwave transmission lines

USES=		pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
