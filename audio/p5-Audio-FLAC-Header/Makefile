# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/audio/p5-Audio-FLAC-Header/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	Audio-FLAC-Header
PORTVERSION=	2.4
PORTREVISION=	3
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to FLAC header metadata

LIB_DEPENDS=	libFLAC.so:audio/flac

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
