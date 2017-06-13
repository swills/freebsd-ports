# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/astro/p5-GPS-Babel/Makefile 421693 2016-09-10 14:14:08Z ehaupt $

PORTNAME=	GPS-Babel
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	astro perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to gpsbabel

BUILD_DEPENDS=	p5-Geo-Gpx>=0.25:graphics/p5-Geo-Gpx \
		p5-File-Which>=0.05:sysutils/p5-File-Which
RUN_DEPENDS=	p5-Geo-Gpx>=0.25:graphics/p5-Geo-Gpx \
		p5-File-Which>=0.05:sysutils/p5-File-Which

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
