# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/astro/p5-Astro-Hipparcos/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	Astro-Hipparcos
PORTVERSION=	0.09
PORTREVISION=	2
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for reading the Hipparcos star catalog

BUILD_DEPENDS=	p5-ExtUtils-XSpp>=0.06:devel/p5-ExtUtils-XSpp

MAKE_ARGS+=	CC="${CXX}"
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
