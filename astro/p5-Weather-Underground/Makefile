# Created by: Simon Olofsson <simon@olofsson.de>
# $FreeBSD: head/astro/p5-Weather-Underground/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Weather-Underground
PORTVERSION=	3.03
PORTREVISION=	1
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieve weather information from wunderground.com

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-libwww>=0:www/p5-libwww

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
