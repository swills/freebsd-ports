# Created by: Mark Atkinson <atkin901@gmail.com>
# $FreeBSD: head/graphics/p5-Image-Scale/Makefile 415916 2016-05-26 22:03:18Z woodsb02 $

PORTNAME=	Image-Scale
PORTVERSION=	0.12
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	atkin901@gmail.com
COMMENT=	Perl module for fast, high-quality fixed-point image resizing

LICENSE=	GPLv2

LIB_DEPENDS=	libgif.so:graphics/giflib \
		libpng.so:graphics/png
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		jpeg perl5
USE_PERL5=	configure

.include <bsd.port.mk>
