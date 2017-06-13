# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/graphics/p5-Acme-Steganography-Image-Png/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Acme-Steganography-Image-Png
PORTVERSION=	0.06
PORTREVISION=	6
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Hide data (badly) in Png images

BUILD_DEPENDS=	p5-Imager>=0:graphics/p5-Imager \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
