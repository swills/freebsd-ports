# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/astro/p5-Astro-Flux/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Astro-Flux
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Class for handling astronomical flux quantities

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Astro-WaveBand>=0:astro/p5-Astro-WaveBand \
		p5-DateTime>=0:devel/p5-DateTime \
		p5-Misc-Quality>=0:astro/p5-Misc-Quality \
		p5-Number-Uncertainty>=0:math/p5-Number-Uncertainty

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
