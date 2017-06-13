# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/audio/p5-Net-DAAP-Client/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Net-DAAP-Client
PORTVERSION=	0.42
PORTREVISION=	3
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Client for Apple iTunes DAAP service

RUN_DEPENDS=	p5-Digest-MD5-M4p>=0:security/p5-Digest-MD5-M4p \
		p5-libwww>=0:www/p5-libwww \
		p5-Net-DAAP-DMAP>=0:audio/p5-Net-DAAP-DMAP
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
