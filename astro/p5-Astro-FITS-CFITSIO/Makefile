# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/astro/p5-Astro-FITS-CFITSIO/Makefile 421407 2016-09-06 07:15:55Z wen $

PORTNAME=	Astro-FITS-CFITSIO
PORTVERSION=	1.11
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for using the cfitsio library

LIB_DEPENDS=	libcfitsio.so:astro/cfitsio

CONFIGURE_ENV=	CFITSIO=${LOCALBASE}
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
