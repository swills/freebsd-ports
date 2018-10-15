# $FreeBSD: head/graphics/p5-Chart/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Chart
PORTVERSION=	2.4.10
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHARTGRP
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to build chart graphics

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-GD>=2:graphics/p5-GD

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
