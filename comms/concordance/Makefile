# Created by: Stephen Hurd <shurd@FreeBSD.org>
# $FreeBSD: head/comms/concordance/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	concordance
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	comms
MASTER_SITES=	SF

MAINTAINER=	shurd@FreeBSD.org
COMMENT=	Command-line Logitech Harmony configuration tool

LICENSE=	GPLv2

LIB_DEPENDS=	libconcord.so:comms/libconcord

USES=		tar:bzip2
WRKSRC_SUBDIR=	${PORTNAME}
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/concordance \
		man/man1/concordance.1.gz

.include <bsd.port.mk>
