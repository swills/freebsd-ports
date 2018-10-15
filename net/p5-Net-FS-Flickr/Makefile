# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/net/p5-Net-FS-Flickr/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Net-FS-Flickr
PORTVERSION=	0.1
PORTREVISION=	8
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Perl interface for store and retrieve files on Flickr

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Acme-Steganography-Image-Png>=0:graphics/p5-Acme-Steganography-Image-Png \
		p5-Flickr-Upload>=0:www/p5-Flickr-Upload

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
