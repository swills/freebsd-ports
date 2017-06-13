# Created by: David E. Thiel <lx@FreeBSD.org>
# $FreeBSD: head/security/ncrack/Makefile 422009 2016-09-13 14:18:54Z woodsb02 $

PORTNAME=	ncrack
PORTVERSION=	0.5
CATEGORIES=	security
MASTER_SITES=	http://nmap.org/ncrack/dist/ \
				http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	High-speed network authentication cracking tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		gmake ssl
CPPFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

.include <bsd.port.mk>
