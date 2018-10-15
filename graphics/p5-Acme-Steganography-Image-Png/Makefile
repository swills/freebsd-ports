# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/graphics/p5-Acme-Steganography-Image-Png/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Acme-Steganography-Image-Png
PORTVERSION=	0.06
PORTREVISION=	6
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Hide data (badly) in Png images

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Imager>=0:graphics/p5-Imager \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
